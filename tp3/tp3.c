#include <stdio.h>
#include "tp3.h"

int mon_strlen(char s[]){
	
	int cpt = 0; 
	while(s[cpt]!= '\0'){
		cpt ++;
	}
	return cpt;
}

int mon_strlen2(const char *s){

	int i = 0;

 	while (*(s+i) != '\0') {
  		i++;
  	}
  	return i;
 }


int mon_strcmp(const char * s1, const char * s2){

	int ts1 = mon_strlen2(s1);
	int ts2 = mon_strlen2(s2);
	int i=0;
	int cmp=0;
	
	while( i<ts1 && i<ts2 && cmp ==0){
		if(*(s1+i)> *(s2+i))
			cmp ++;
		else if( *(s1+i) < *(s2+i))
			cmp --;
		i++;
	}

	return cmp;
 }

int mon_strncmp(const char * s1, const char * s2, int n){

	int ts1 = mon_strlen2(s1);
	int ts2 = mon_strlen2(s2);
	int i=0;
	int cmp=0;
	
	while( i<ts1 && i<ts2 && cmp ==0 && i<n){
		if(*(s1+i)> *(s2+i))
			cmp ++;
		else if( *(s1+i) < *(s2+i))
			cmp --;
		i++;
	}

	return cmp;
 }

char *mon_strcat(char *s1, const char *s2){

	int ts1 = mon_strlen2(s1);
	int i=0;

	while( *(s2+i)!='\0'){
		*(s1+ts1+i) = *(s2+i);
		i++;
	}
	*(s1+ts1+i)= *(s2 + i);

	return s1;
}