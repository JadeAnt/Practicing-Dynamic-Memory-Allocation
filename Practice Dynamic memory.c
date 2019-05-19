#include <stdio.h>
#include <stdlib.h>

int main(){
	char d[100] = "Goodbye";
	
	typedef struct{
		char a[10];
		int b;
		char c;
	}Test;
	
	Test *mine;
	
	mine = (Test*)malloc(sizeof(Test));
	if(mine == NULL){
		printf("Error did not allocate memory");
		exit(1);
	}
	
	strcpy(mine->a, "Hello" /* OR a variable d*/);// Must use this when dynamically allocating strings 
	mine ->b = 7;
	mine ->c = 'j';
	
	printf("a = %s \nb = %d \nc = %c", mine->a, mine->b, mine->c);
}
