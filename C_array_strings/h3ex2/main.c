/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	float x[100],sum=0;
	int i,j;
	printf("enter the number of elements");
	fflush(stdout);
	scanf("%d",&j);
	fflush(stdin);
	for(i=0;i<j&&j>0&&j<100;i++){
		printf("enter element:");
		fflush(stdout);
		scanf("%f",&x[i]);
		fflush(stdin);
		sum+=x[i];
	}
	printf("avergae = %.2f",sum/j);



}
