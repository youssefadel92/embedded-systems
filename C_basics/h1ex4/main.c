/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	float x,y;
	printf("Enter two Numbers:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("sum = %f",x+y);

}
