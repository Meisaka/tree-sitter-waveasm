module.exports = grammar({
	name: 'waveasm_generic',
	extras: $ => [ ],
	rules: {
		source_file: $ => seq(
			optional($.line),
			repeat(seq($._eol, optional($.line)))
		),
		line: $ => choice(
			$.comment,
			seq($.label, optional($.comment)),
			seq($.label, $._spc, optional($.comment)),
			seq($.label, $._spc, $.directive, optional($.comment)),
			seq($.label, $._spc, $.operation, optional($.comment)),
			seq($._spc, $.directive, optional($.comment)),
			seq($._spc, $.operation, optional($.comment)),
			seq($.directive, optional($.comment)),
		),
		label: $ => choice(
			seq($.identifier),
			seq($.identifier, ':'),
			seq(':', $.identifier),
			seq($._spc, $.identifier, ':'),
			seq($._spc, ':', $.identifier),
		),
		parameters: $ => choice(
			$._parameter,
			seq($._parameter, repeat1(seq(optional($._spc), ',', optional($._spc), $._parameter))),
		),
		_expression: $ => choice($._value, $._bin_expr),
		_parameter: $ => choice($._expression, $.register, $.string),
		_bin_expr: $ => choice(
			prec.left(1, seq($._expression, optional($._spc), '+', optional($._spc), $._expression)),
			prec.left(1, seq($._expression, optional($._spc), '-', optional($._spc), $._expression))
		),
		_value: $ => choice($.identifier, $._const, $.char),
		directive: $ => choice(
			$.dname,
			seq($.dname, $._spc, $.parameters)
		),
		dname: $ => repeat1(seq('.', $._name)),
		operation: $ => choice(
			$.opcode,
			seq($.opcode, $._spc, $.parameters),
		),
		opcode: $ => $._name,
		_eol: $ => /\r?\n/,
		_spc: $ => /[ \t]+/,
		comment: $ => /[ \t]*;[^\r\n]*/,
		string: $ => seq('"', repeat(choice(/[^"\\]+/, $.escape)), '"'),
		char: $ => seq('\'', choice(/[^'\\]/, $.escape), '\''),
		escape: $ => /\\[nr0be"'\\]/,
		_const: $ => choice($.const_zero, $.const_bin, alias($.alt_hex, $.const_hex), $.const_oct, $.const_hex, $.const_dec),
		const_zero: $ => '0',
		const_dec: $ => /[1-9][0-9]*/,
		alt_hex: $ => /[0-9A-Fa-f]+h/,
		const_hex: $ => /0x[0-9A-Fa-f]+/,
		const_oct: $ => /0[0-7]+/,
		const_bin: $ => /0b[0-1]+/,
		_name: $ => /[a-zA-Z_]+/,
		_nname: $ => /[a-zA-Z_][a-zA-Z_0-9]+/,
		identifier: $ => choice($._name, $._nname),
		register: $ => /%[a-zA-Z][a-zA-Z0-9]*/
	},
});

