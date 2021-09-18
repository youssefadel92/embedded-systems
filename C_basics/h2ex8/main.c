/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: embeddedsystem
 */

#include "stdio.h"
int main(){
	float x,y,output;
	char choice;
	printf("enter an operator (+,-,*,/):");
	fflush(stdout);
	scanf("%c",&choice);
	fflush(stdin);
	printf("enter two numbers:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	switch(choice){
	case '+':{
		output=x+y;
		printf("%.1f + %.1f = %.1f",x,y,output);
		break;
	}
	case '-':{
		output=x-y;
		printf("%.1f - %.1f = %.1f",x,y,output);
		break;
	}
	case '*':{
		output=x*y;
		printf("%.1f * %.1f = %.1f",x,y,output);
		break;
	}
	case '/':{
		output=x/y;
		printf("%.1f / %.1f = %.1f",x,y,output);
		break;
	}
	default:
		printf("operator not defined");
	}

		return 0;
}
