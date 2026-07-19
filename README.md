# ASLER
an basic programming language made in c , completely from scratch
a project by @yeahhh-sh-09 (github) , @yeahhh_sh (instagram , reddit , discord)
This projects is not made using AI and AI should not be used by any future developer contributing.

### code flow
Lexer/tokenizer -> array of tokens in sequence -> parser(/AST) -> executed without c transpliation or any VM 
example :
> main.asl -> lexer -> tokens -> parser -> executed on machine code

### syntax
```Asler
write("hello") // it will write "hello"
x = get("hello enter : ") // it is like `scanf()` of c , `input()` of python , `std::cin` of cpp
write(x) // it will write the varibale
```
if , else if (elif) , else.. without `{}` it will use intendation..
```Asler
x = 10
if x>99 :
    write("big")
else if x==10 :
    write("big")
else :
    write("it is " , x ) // or `write(m" it is ${x} ")
```
for loop 
```Asler
l = [10,20,"hello",12.2]
for i in range(1,3,2) : // range(start , stop , step) if we don't enter step it will defaulted to 1
        write(i)
for var in l :
    write(var)
```
while loop 
```Asler
i = 0
while i==1 :
    write("hello")
    i+=1
```

### PROBLEM I HAD AND SOLUTION I GOT
problem was.. i wanted smart lexer that can that can decide data type real time and we don't have to declare when declaring variable
solution is : it will have 1 byte memory for state/tag for each.. like string or int or float.. and have dataslot of ram for that variable (which is un-assigned) and when that particular token is read competely.. it we will have "tag" for it and that will be stored in that dataslot/payload slot.. and when doing operation it comapare tags.. if didn't match.. it will convert int->float/string or float->string or other according to priority order. (example : concated when we try add 1 and "hello" and gave "1hello" because it flipped tag of `1` from int to string..

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

