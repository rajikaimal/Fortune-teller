#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//fortune functions 

void findFortune(int fortuneNum){
	switch(fortuneNum){
		case(1) : printf("Attractive :  %d ~ Trustworthy : %d ~ Intelligent : %d ~ Jealous : %d  \n ", rand() % 20,rand() % 40,rand() % 60,rand() % 80);
					break;
		case(2) : printf("Attractive :  %d ~ Trustworthy : %d ~ Intelligent : %d ~ Jealous : %d  \n ", rand() % 40,rand() % 20,rand() % 40,rand() % 60);
					break;
		case(3) : printf("Attractive :  %d ~ Trustworthy : %d ~ Intelligent : %d ~ Jealous : %d  \n ", rand() % 80,rand() % 90,rand() % 50,rand() % 30);
					break;
		case(4) : printf("Attractive :  %d ~ Trustworthy : %d ~ Intelligent : %d ~ Jealous : %d  \n ", rand() % 70,rand() % 50,rand() % 60,rand() % 20);
					break;
		case(5) : printf("Attractive :  %d ~ Trustworthy : %d ~ Intelligent : %d ~ Jealous : %d  \n ", rand() % 50,rand() % 90,rand() % 10,rand() % 10);
	}
}

void main(){
	char name[20];
	char check[2];
	int checkout = 0;
	while(checkout == 0){
		printf("Enter your first name ! \n");
		scanf("%s",name);
		printf("Your name : %s \n" , name);
		char first_letter = name[0];
		if(first_letter>='A' && first_letter<'G'){
			findFortune(1);
		}
		if(first_letter>='G' && first_letter<'L'){
			findFortune(2);
		}
		if(first_letter>='L' && first_letter<'Q'){
			findFortune(3);
		}
		if(first_letter>='Q' && first_letter<'W'){
			findFortune(4);
		}
		if(first_letter>='W' && first_letter<='Z'){
			findFortune(5);
		}
		printf("|||||||| Do you wanna try again (y/n) |||||||| \n" );
		scanf("%s",check);
		if(strcmp(check,"y") == 0){
			checkout == 0;
		}
		if(strcmp(check,"y") != 0){
			printf(":::::::: Ciao ::::::::\n");
			break;
		}
	}
}