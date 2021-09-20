/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */


#include "stdio.h"
int main(){
	float x[2][2],y[2][2],r[2][2];
	int i,j;
	printf("enter the elements of first matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("element x%d %d:",i,j);
			fflush(stdout);
			scanf("%f",&x[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("element y%d %d:",i,j);
			fflush(stdout);
			scanf("%f",&y[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			r[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("sum of matricees:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.2f  ",r[i][j]);
		}
		printf("\n");
	}

}
