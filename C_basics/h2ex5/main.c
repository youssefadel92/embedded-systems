/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	char x;
	printf("enter a charachter:");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
	if( ((int)(x)>=65 && (int)(x)<=90) || ((int)(x)>=97 && (int)(x)<=122) )
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);

	return 0;
}
