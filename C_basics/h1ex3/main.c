/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	int x,y;
	printf("Enter two Integers:");
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("sum = %d",x+y);

}
