/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: embeddedsystem
 */
#include "stdio.h"
#include "string.h"
int main(){
	char word[100],ch;
	int i,count=0;
	printf("enter the word:");
	fflush(stdout);
	gets(word);
	printf("enter the charachter:");
	fflush(stdout);
	scanf("%c",&ch);
	fflush(stdin);
	for(i=0;i<strlen(word);i++){
		if(word[i]==ch)
			count++;
	}
	printf("count= %d",count);
}
