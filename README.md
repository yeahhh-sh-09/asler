# ASLER
an basic programming language made in c , completely from scratch
a project by @yeahhh-sh-09 (github) , @yeahhh_sh (instagram , reddit , discord)
This projects is not made using AI and AI should not be used by any future developer contributing.

### code flow
Lexer/tokenizer -> array of tokens in sequence -> parser(/AST) -> CodeGen -> generate c equivalent code -> execute via gcc
example :
> main.asl -> lexer -> tokens -> parser,codegen -> main.c -> gcc main.c -o main && ./main

## LEXER
**On-Strem lexer** with flow state , for single-pass only tokenization.
- it gets asler code file (i.e examples/main1.asl)
- then uses while loop and stores characters in temp[] (temporary string)
- when flow changes it appends temp[] into tokens[] and clears it
- and repeat all this in while loop till EOF (End-Of-File)
#### flow determination :
flow = 0 for Characters A-Z , a-z , 0-9 and _
flow = 1 for operators (+,-,/,*,=,!,<,>)
flow = -1 for signs which are not operators

## PARSER(/AST)
yet to be start..

## CODEGEN
yet to be start..
