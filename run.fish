#!/bin/env fish

clear
tree-sitter generate
tree-sitter parse '/home/econn/git/tree-sitter-hurl/examples/front_page/grammer.hurl' --no-ranges | tr "(" " " | tr ")" " " | string replace ERROR (set_color red)ERROR(set_color normal)
