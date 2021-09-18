/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	int x,factorial=1,i;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	if(x<0)
		printf("negative numbers doesnt have factorial");
	else if(x>0)
	{
		for(i=1;i<=x;i++)
			factorial*=i;
		printf("factorial = %d",factorial);
	}
	else
		printf("factorial = 1");



	return 0;
}
