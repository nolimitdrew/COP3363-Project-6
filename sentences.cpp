
/* Name: Andrew Stade
Date: 3/31/2019
Section: 0004
Assignment: Homework #6 (Practice with Arrays & Strings )
Due Date: 4/2/2019
About this project: This assignment will consist of writing a program that 
involves practice with arrays, random number generation, and Strings. 
You may use c-strings or string objects here, however, 
string objects is recommended.
Assumptions: The user will only input variables.

All work below was performed by Andrew Stade */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	int i;
	int j;
	const string article[5] = {"the", "a", "one", "some", "any"};
	const string preposition[5] = {"to", "from", "over", "under", "on"};
	int article1[5];
	string noun[5];
	string verb[5];
	string sentence;
	srand(time(0));
	
	
	
	cout << "Enter 5 nouns (lowercase): " ; /*Prompts for 5 nouns regardless
											of capitalization*/
											
	for (int i = 0; i < 5; i++)
	{
		cin >> noun[i];
	}
	
	cout << "Enter 5 past tense verbs (lowercase): " ;  /*Prompts for 5 verbs
													regardless of capitalization*/
	for (int j = 0; j < 5; j++)
	{
		cin >> verb[j];
	}
	
	cout << endl;	
	
	for (int i = 0; i < 5; i++)
	{
		if(isupper(noun[i][0])) //Makes any noun input lowercase
		{
			noun[i][0] = tolower(noun[i][0]);
			noun[i][1] = tolower(noun[i][1]);
			noun[i][2] = tolower(noun[i][2]);
			noun[i][3] = tolower(noun[i][3]);
			noun[i][4] = tolower(noun[i][4]);
			noun[i][5] = tolower(noun[i][5]);
			noun[i][6] = tolower(noun[i][6]);
			noun[i][7] = tolower(noun[i][7]);
			noun[i][8] = tolower(noun[i][8]);
			noun[i][9] = tolower(noun[i][9]);
		}
		
		
	}
	
	for (int j = 0; j < 5; j++)
	{
		if(isupper(verb[j][0])) //Makes any verb input lowercase
		{
			verb[j][0] = tolower(verb[j][0]);
			verb[j][1] = tolower(verb[j][1]);
			verb[j][2] = tolower(verb[j][2]);
			verb[j][3] = tolower(verb[j][3]);
			verb[j][4] = tolower(verb[j][4]);
			verb[j][5] = tolower(verb[j][5]);
			verb[j][6] = tolower(verb[j][6]);
			verb[j][7] = tolower(verb[j][7]);
			verb[j][8] = tolower(verb[j][8]);
			verb[j][9] = tolower(verb[j][9]);
		}
	}


	
	
	
	for (int i = 0; i < 5; i++) /*Trying to capitalize first letter,
								but failed*/
	{
		if(islower(article1[0]))
		{
			article1[0] = toupper(article1[0]);
		}
	}
	
	for (int i = 1; i < 21; i++) //Prints 20 random sentences
	{
		sentence = article[rand() % 5] + " " + noun[rand() % 5] + " " + 
		verb[rand() % 5] + " " + preposition[rand() % 5] + " " + 
		article[rand() % 5] + " "  + noun[rand() % 5] + ".";
		
		cout << sentence << endl; 
	}
	
	cout << endl;
	
	return 0;
}


