/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	int x;
	printf("Enter an Integer:");
	fflush(stdout);
	scanf("%d",&x);
	printf("You entered %d",x);

}
