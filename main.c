#include <stdio.h>

char operators[] = {'+' , '-' , '*' , '/' , '%' , '=' , '<' , '>' , '!' } ;

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

int GetFlow(char ch ){
	int flow ;
	if( ch>='A' || ch<='Z' || ch>='0' || ch<='9' || ch>='a' || ch<='z'){
		flow = 0 ;
	}
	else if ( CheckIn( ch,operators)==1){
		flow = 1 ;
	}
	else{
		flow = -1 ;
	}

	return flow ;
}


int main(){ // this main() will later be converted into lexer() function and this main.c will convert into lexer.h or lexer.c that will be used in later main.c
	
	int num_of_tok = 0 ;
	char *tokens[num_of_tok] = {};
	FILE *code = fopen("sample.txt" , "r") ;
	
	int i = 0 ;
	char temp[i] = {} ;

	int LenCode = sizeof(*code)/sizeof(code[0]) ;
	int lexing = 1 ;
	int iteration = 0 ;
	while(lexing==1){
		char ch = fgetc(code) ;
		int flow = GetFlow(ch) ; // flow = 0 for AZaz09_ and flow = 1 for operators and for character in signs but not in operators will make flow = -1 change in flow will append characters stored in temp[] will append in tokens[] .. rest if it is in signs but not in operators.. so it will directly append in tokens[]   
		int previous_flow ;
		if(iteration==0){ previous_flow = flow ; } //a fix for first iteration.. else previous flow will be undeclared for first iteration.

		if(flow!=previous_flow){
			temp[i] = '\0' ;
			i++ ;

			tokens[num_of_tok] = temp ;
			num_of_tok++ ;

			temp={} ;
			i = 0 ;

			temp[i]=ch;
			i++ ;
		}
		else{
			temp[i] = ch ;
			i++ ;

		}
		
		previous_flow = flow ; 
		iteration++ ;

		if(ch==EOF){
			lexing = 0 ;
			
			temp[i] = '\0' ;
			i++ ;

			tokens[num_of_tok] = temp ;
			num_of_tok++ ;
		}
	}

}

