/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	float a,b,temp;

	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a = %.2f",a);
	printf("After swapping, value of b = %.2f",b);

}
