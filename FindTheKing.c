#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>




int cash = 100;

void playgame(); //Declaring the function


void Type(const char* p) {

	//This Function will help to simulate typing.

	if (NULL == p)
		return;

	while (*p) {
		printf("%c\xDB", *p++);
		usleep(2000);  //To slow things down.
		printf("\b \b");//simulate blinking the curser \b moves the curser back one location
		usleep(2000);
	}
	usleep(30000); //To delay the next statement.
}


int main() {

	int betting_amount;
	Type("-------welcome---------");
	printf("\n\nTotal cash=$%d", cash);
	Here: 
	while (cash > 0)
	{
		Type("\n\nPlease enter your betting amount?$");
		scanf("%d", &betting_amount);
		if (betting_amount == 0 || betting_amount > cash || betting_amount < 0){
		
			Type("Invalid amount.\n");
			goto Here; 
	}
		playgame(betting_amount);

	}
	
		

	Type("\n------Game over------\n");


	return 0;

}

//Defining the function 
void playgame(int betting_amount) {

	char A[3] = { 'J','K','Q' };
	int playerchoice;
	int i;
	srand(time(NULL));
	for (i = 1; i <= 10; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = A[x];
		A[x] = A[y];
		A[y] = temp;
	}
	Type("\nShuffling is done.\n");

  start:

	Type("\nWhat is the position of king(1,2,3)?");
	scanf ("%d", &playerchoice);

	if (playerchoice > 3 || playerchoice < 1) {

		Type("\nWrong entry, only 1,2, or 3 are accepted\n");

		goto start;
	}


	if (A[playerchoice - 1] == 'K')
	{
		cash = cash + betting_amount;
		printf("\nYou win! :)	\nPosition of cards= '%c' '%c' '%c'   \nYour current balance=$%d\n", A[0], A[1], A[2], cash);
	}
	else
	{
		cash = cash - betting_amount;
		printf("You lose! :( \nPosition of cards= '%c' '%c' '%c'   \nYour current balance=$%d\n", A[0], A[1], A[2], cash);
	}

}
