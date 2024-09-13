package tree_sitter_nuf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nuf "github.com/tree-sitter/tree-sitter-nuf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nuf.Language())
	if language == nil {
		t.Errorf("Error loading Nuf grammar")
	}
}
