/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	char x;
	printf("Enter charachter:");
	fflush(stdout);
	scanf("%c",&x);

	printf("Ascii value of %c = %d",x,x);

}
