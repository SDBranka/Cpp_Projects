/*
 * Programmer: Sam Branka
 * Date: 1/30/16
 * Description: This program will have various 
 *              outputs based upon multiple user 
 *              inputs in a story based, game
 *              oriented fashion
 */


#include <iostream>
#include <string>    // includes library that allows a string of characters to be stored
#include <cstdlib>   // includes library that allows pow and rand
#include <ctime>     // includes computer time
using namespace std;


void encounter_One (int, int& h, int& s, int& l, int& d, int& m);
int stats (int& , int& , int& , int& , int&);
void initialStats(int, int&, int&, int&, int&);

int main(){
	
	string player_name, item_one, item_two, 
		item_three, item_four, item_five;
	int health, strength, luck, defense,
		money=0, good_today, encounterOne;
	
    srand(time(NULL));       //seed the random number generator via the computer time
	
	cout<< "Enter your name: "; 
	cin>> player_name;
	cout<< "\nWelcome " << player_name
		<< " how are you feeling today?"
		<< "\n(on a scale of one to five "
		<< "where five \nis wonderfully contented and "
		<< "ready to rock)   ";
	cin>> good_today;

//initializes stats	
    initialStats(good_today, health, strength, luck, defense);
//displays and stores stats
    stats(health, strength, luck, defense, money);

//Round1
	cout<< "What a bright and beautiful day; the birds \nare singing and"
		<< " flowers lightly scent the air \nas it gently passes by."
		<< " What is it that you see\nbefore you?\n\n";
	encounterOne= 1 + (rand()%6);       // random character generator
    cout<< encounterOne;                     //editing line just to check value

	// encounter?

    return 0;
}

//initializes players stats
void initialStats(int good_today, int& health, int& strength, int& luck, int& defense)
{
		switch (good_today){
		case 1: {
			health=45;
			strength=30;
			luck=25;
			defense=45;
			cout<< "\n      Awww, poor baby. \nDon't worry"
				<< " I'll give you something else \nto whine about"
				<< " before our time here's \ndone I'm sure.\n\n       Let's"
				<< " begin.";			   	
			}break;
		case 2: {
			health=55;
			strength=40;
			luck=40;
			defense=55;
			cout<< "\n      Awww, poor baby. \nDon't worry"
				<< " I'll give you something else \nto whine about"
				<< " before our time here's \ndone I'm sure.\n\n       Let's"
				<< " begin.";
			}break;
		case 3: {
			health=70;
			strength=70;
			luck=65;
			defense=70;
			cout<< "\nGood, good, me too. I mean, \nI've had worse, but"
				<< " I've had better,\nyou feel me? \nNo? \nWell fine...";
			}break;
		case 4: {
			health=85;
			strength=85;
			luck=80;
			defense=85;
			cout<< "Good for you. Let's begin!";
			}break;
		case 5: {
			health=100;
			strength=100;
			luck=95;
			defense=100;
			cout<< "            AMAZING!!!\n    Let's be on our way then.";
			}break; 
		default: {
			cout<< "\nApparenly you are either "
				<< "unable to read or \nunable to "
				<< "follow directions. This may be "
				<< "a \nlong game... Better start now ::sighs::";
			health=65;
			strength=12;
			luck=15;
			defense=65;
			}break;
	}	
}

//This function stores and displays the players statistics
int stats (int& h, int& s, int& l, int& d, int& m)
{

	int health, strength, luck, defense, money;

	health=h;
	strength=s;
	luck=l;
	defense=d;
	money=m;

	cout<< "\n\n       Health: " << health << ". Strength: " << strength
		<< "\n                Money: " << money <<".\n\n";

	/* 
		cout<< "Health is: " << health << ". Strength is: " 
			<< strength << ". Luck is: " << luck << ". \nDefense is: "
			<< defense << ". You have " << money << " gold coins.\n\n";
   */
	return 0;  
}


// int randomCharacter()
void encounter_One(int eO, int& h, int& s, int& l, int& d, int& m)
{
    int decision,                                         //place holding variable for decisions made in this function
	    other_h, other_s, other_l, other_d, other_m;      //holds the stats of a entity encountered
	
	switch(eO){
		//bad guy
		case 1:{
			cout<< "ZOMG! The scent quickly turns foul. Your "
				<< "nostrils\nburn with a whafting mixture of "
				<< "sulfur, \nexcrement, and... mulberries!?!? You need not even"
				<< "\nfind it with your eyes, approaching over the\n nearby hill. "
				<< "             A BAFFALO!";
			other_h=10;
			other_s=3;
			other_l=3;
			other_d=3;
			other_m=3;

			decision=l;
			break;
		}
		//good guy
		case 2: {
			break;
		}
        //bad item 
        case 3: {
			break;
		}
		//good item
		case 4: {
			break;
		}
		//bad guy
		case 5: {
			break;
		}
		//bad guy
		case 6: {
			break;
		}		
	}
}


