/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */
#include "stdio.h"
#include "string.h"
int main(){
	char word[100],temp;
	int i;
	printf("enter the word:");
	fflush(stdout);
	gets(word);

	for(i=0;i<strlen(word);i++){
		if(strlen(word)-1-i==i)
			break;
		temp=word[i];
		word[i]=word[strlen(word)-1-i];
		word[strlen(word)-1-i]=temp;
	}
	printf("reversed= %s",word);
}
