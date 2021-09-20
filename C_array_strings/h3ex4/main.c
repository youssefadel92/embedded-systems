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
	printf("enter the element:");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	printf("enter the location:");
	fflush(stdout);
	scanf("%d",&location);
	fflush(stdin);
	for(i=count;i>=location;i--){
		x[i]=x[i-1];
	}
	x[location-1]=number;
	count++;
	for(i=0;i<count;i++){
		printf("%d ",x[i]);

	}


}
