/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	float x,y,z;
	printf("enter three numbers:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	fflush(stdin);
	if(x>y&&x>z)
		printf("%.2f is the largest",x);
	else if(z>y&&z>x)
		printf("%.2f is the largest",z);
	else
		printf("%.2f is the largest",y);

	return 0;
}
