#include <stdio.h>



int CheckIn(char input, char array[] ){
	int is_exists ;
	int ArrayLen = sizeof(*array)/sizeof(array[0]) ;
	for(int i = 0 ; i<ArrayLen ; i++){
		if ( array[i] == input){
			is_exists = 1 ;
		}
	}

	if(is_exists != 1){}
	else{ is_exists = 0 ;}

	return is_exists ;
}

int main(){ // this main() will later be converted into lexer() function and this main.c will convert into lexer.h or lexer.c that will be used in later main.c
	
	char *tokens[] = {};
	FILE *code = fopen("sample.txt" , "r") ;

	char brackets[] = {'[' , ']' ,'(' , ')' , '{', '}'} ;
	char strings[] = {'"' , "'"  } ;
	char operators[] = {'+' , '-' , '*' , '/' , '%' , '=' , '<' , '>' , '!' } ;
	char special_operators[] = {'#' , '$' , '&' , '|' } ;
	char signs[] = {'[' , ']' ,'(' , ')' , '{', '}' , 
			'"' , "'" ,  
		       	'+' , '-' , '*' , '/' , '%' , '=' , '<' , '>','!' , 
			'#' , '$' , '&' , '|' } ;
	
	
	char temp[] = {} ;
	int i = 0 ;
	int LenCode = sizeof(*code)/sizeof(code[0]) ;

	while(fgetc(code)!=EOF){
		int flow ; // flow = 0 for AZaz09_ and flow = 1 for operators and for character in signs but not in operators will make flow = -1 change in flow will append characters stored in temp[] will append in tokens[] .. rest if it is in signs but not in operators.. so it will directly append in tokens[]   
		char ch=fgetc(code) ;
		
	}
}
