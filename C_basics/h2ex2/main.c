/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	char x;

	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
	switch(x){
	case 'a':
	case 'A':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	case 'i':
	case 'I':
	case 'e':
	case 'E':
	{
		printf("%c is vowel",x);
		break;
	}
	default:
	{
		printf("%c is constant",x);
	}

	}


}
