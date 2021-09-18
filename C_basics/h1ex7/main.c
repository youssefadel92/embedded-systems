/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	float a,b;

	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	a+=b;
	b=a-b;
	a-=b;

	printf("After swapping, value of a = %.2f",a);
	printf("After swapping, value of b = %.2f",b);

}
