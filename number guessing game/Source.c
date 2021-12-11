#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void){

	int number_of_guesses=0;
	int Actual_number=0; 
	int guess =0 ; 
	int temp; 
	int check_numeric; 

	printf("**************************\n"); 
	printf("Hello!welcome to the number guessing game \n "); 
	printf("****************************\n"); 
	printf("Enter the mystery number \n "); 
	scanf_s("%d", &Actual_number); 
	
	
	do  {
		if (number_of_guesses > 5  ) {
			printf("you lose"); 
			break; 
		}
		if (Actual_number < 0 || Actual_number>1000) {
			printf("your number is outside range \n ");
			break; 
		}
		
		printf("Enter a guess\n");
		 check_numeric = scanf_s("%d", &guess);
		while (check_numeric != 1) {
			while ((temp = getchar()) != EOF && temp != '\n');
			printf("Invalid input... please enter a number: ");
			number_of_guesses = number_of_guesses + 1;
			break; 
			
		}
		
		if (Actual_number>0 || Actual_number<1000)
		  
		 if (guess > Actual_number) {
			printf(" number is too high, try again! \n");
			number_of_guesses = number_of_guesses + 1;
		}
		else if(guess< Actual_number) {
			printf(" number is too low, try again !\n");
			number_of_guesses = number_of_guesses + 1;
		}
		
		//number_of_guesses = number_of_guesses++;
	
		else {
			printf("your answer is correct \n");
		}
	} while ( guess != Actual_number);

	printf("your #%d guess is %d\n", number_of_guesses+1, guess); 

}