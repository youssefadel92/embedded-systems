/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */
#include "stdio.h"
#include "string.h"
int main(){
	char word[100];
	int i,count=0;
	printf("enter the word:");
	fflush(stdout);
	gets(word);
	for(i=0;word[i]!='\0';i++){
		count++;
	}
	printf("strlen= %d",count);
}
