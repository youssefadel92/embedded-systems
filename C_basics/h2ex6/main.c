/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	int x,sum=0,i;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	for(i=1;i<=x;i++)
		sum+=i;
	printf("sum= %d",sum);

	return 0;
}
