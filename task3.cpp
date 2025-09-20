#include <stdio.h>
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d", &year);
	if (year % 4 == 0){
		printf("Year is a leap year.");
	} else{
		printf("Year is not a leap year.");
	}
	return 0;
}

