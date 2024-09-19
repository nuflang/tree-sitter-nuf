(statement
    (expression
        (function_call
            (identifier) @function
            (bracket) @punctuation.bracket
            (string) @string
        )
    )
    (delimiter) @punctuation.delimiter
)

(statement
    (expression
        (string) @string
    )
    (delimiter) @punctuation.delimiter
)
