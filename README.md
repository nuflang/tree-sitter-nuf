# Tree-sitter grammar for the Nuf language

## Installation

### Neovim

1. Add `nuf` filetype

```lua
vim.filetype.add({ extension = { nuf = "nuf" } })
```
2. Add `nuf` parser

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.nuf = {
  install_info = {
    url = "github.com/nuflang/tree-sitter-nuf",
    files = { "src/parser.c" },
  },
}
```

3. Add `nuf` query in `/queries/nuf/hightlights.scm`

```scm
(function_call
    (identifier) @function
    (bracket) @punctuation.bracket
    (string) @string
)
(delimiter) @punctuation.delimiter
```

4. `:TSInstall nuf` 
