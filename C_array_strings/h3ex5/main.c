/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */
#include "stdio.h"
int main(){
	int x[50],i,number,location,count;
	printf("enter the number of elements");
	fflush(stdout);
	scanf("%d",&count);
	fflush(stdin);
	for(i=0;i<count;i++){
		printf("enter element:");
		fflush(stdout);
		scanf("%d",&x[i]);
		fflush(stdin);
	}
	printf("enter the element to be found:");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	for(i=0;i<count;i++){
		if(x[i]==number)
			location=i+1;
	}
	if(location<count)
		printf("found the number at location: %d",location);
	else
		printf("not found");
}
