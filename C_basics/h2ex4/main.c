/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	float x;
	printf("enter a number:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	if(x>0)
		printf("%.2f is positive",x);
	else if(x<0)
		printf("%.2f is negative",x);
	else
		printf("%.2f is zero",x);

	return 0;
}
