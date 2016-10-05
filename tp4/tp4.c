#include <stdio.h>
#include <stdlib.h>  /* pour pouvoir utiliser malloc */
#include <string.h>   // pour pouvoir utiliser strlen
#include <ctype.h>
#include "tp4.h"

char * miroir (const char *s){

	char * p = NULL;
	int n = strlen(s)-1;
	s = s+n;
	p = malloc(n) ;


	if(p==NULL){
		printf("Allocation impossible");
		return NULL;
	}
	else{
		while(*(s) !='\0'){
			*p = *s;
			p++;
			s--;

		}
	}

	*(p+n)='\0';

	return (p-n)-1;
}

char * saisie (){

	char clavier ='a';
	char * res  = malloc(0);
	int i = 0;

	while( !isspace(clavier)){
		clavier = getchar();
		res[i] = clavier;
		i++;
		res = realloc(res,i);

	}
	return res;
}