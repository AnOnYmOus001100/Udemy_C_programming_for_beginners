/*-----------------------------------------------------------------------------------------------------------------------------------------------
		  -----   |   |	----	----	----	---   |\ |    ----- 	    ----    /\   |\/|  ----
		 |  __    |   |	|__	|__	|__	 |    | \|   |	__	    |  __  /__\  |  |  |__		          __	
		 |__| |   |___|	|___	___|	___|	 |    |  |   |__| |	    |__|| /    \ |  |  |___	            /|   |  |		
							---								 \/  | . |__|  
---------------------------------------------------------------------------------------------------------------------------------------------------

This is a simple guessing game. 

Objective: To guess the correct the number within 5 attempts.

Rule: The game will prompt to enter a number between 0-20 within 5 attempts, after entering a number the game will show if the guess is low, high or same number depending on the input. On correct guess the game is won and another prompt pops to retry.

* Note: In case the input is not between 0-20 there will be a prompt to re-enter a valid number.

Working: The program generates a random number between 0-20, and prompts the user to enter a number between 0-20 within 5 attempts, if the correct number is input then a Congrats message pops, otherwise it shows if the input number is less or greater than the generated random number, if the user is unable to enter the correct guess number within 5 attempts then the game is over, and again a prompt pops to either retry the game or quit. 
The user can anytime quit the game by pressing q and Enter, then a confirm prompt pops whether to quit or continue.

----------------------------------------------------------------------------------------------------------------------------------------------------
Author: AnOnYmOus001100
Date: 18/07/2020, 18:35

----------------------------------------------------------------------------------------------------------------------------------------------------*/

// define constants


//header file declaration
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// main function 
int main()
{
	// variable declaration
	int random_number = 0, guess = 0, tries_left, flag;
	time_t t; 	// time variable used for seeding a random number
	char ch;	// for choice
	
	// code starts here
	start:
	tries_left = 5;		// setting the tries	
	flag = 0;	// setting flag to 0

	// initialising random number generator
	srand((unsigned) time (&t));
	
	// generating random number
	random_number = rand() % 21;


	// welcome screen
	printf ("############################################--<<WELCOME TO GUESSING GAME V1.0>>--#################################################");	
	printf ("\n I have chosen a number between 0 and 20. Can you guess the number?");	

	// loop to continue the game
	while (tries_left > 0 && flag != 1)
		{
			printf ("\n----------------------------------------------------------------------------------------------------------------");
			printf ("\n Tries left:  %d",tries_left);
			// input prompt
			printf ("\n Enter your guess: ");
			scanf ("%d",&guess);
			
			// checking if guess is within limits
			if (guess > 0 && guess < 20)
				{
					
					if (guess == random_number)
						{
							printf ("Congratulations, you guessed the number correctly.\n");	// on correct guess
							flag = 1;
						}
					else if (guess > random_number)
						printf ("Sorry, my number is less than that.\n");	// when guess greater than random number
					else
						printf ("Sorry, my number is greater than that.\n");	// when guess lesser than random number
					
						tries_left--;	// decrementing tries by 1 on wrong guess
				}
			else
				printf ("Your input is invalid, Please a enter number between 0 and 20.\n"); // guess out of range
		}
	// checking win or loss
	if (flag == 0)
		printf ("Game Over !!!, You ran out of tries. \n The number was %d.",random_number);
	else
		printf ("Hurray !!!!! , You won.");

	// retry prompt
	printf ("\n Do you want to retry (y/n): \n");
	scanf ("%c",&ch);
	
	if (ch == 'y')
		{
			for (int i=0; i<10; i++)
				printf ("\n");
			goto start;
		}
	else
		printf (" Thanks for Playing.");

 return 0;
}
