#include <stdio.h>
int main(){
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	if (age < 13){
		printf("You are a child.\n");
	} else{
		if (age >=14 && age <=20){
			printf("You are a teenager.\n");
		} else {
			if (age > 20 && age <= 60 ){
				printf("You are an adult.\n");
			} else {
				printf("You are a senior.\n");
			}
		}
	}
	return 0;
}

