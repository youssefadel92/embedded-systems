/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	int x[10][10],tr[10][10],r,c,i,j;
	printf("enter num of rows:");
	fflush(stdout);
	scanf("%d",&r);
	fflush(stdin);
	printf("enter num of cols:");
	fflush(stdout);
	scanf("%d",&c);
	fflush(stdin);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element:");
			fflush(stdout);
			scanf("%d",&x[i][j]);
			fflush(stdin);
			tr[j][i]=x[i][j];
		}
	}
	printf("entered matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",x[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose matrix:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d  ",tr[i][j]);
		}
		printf("\n");
	}
}
