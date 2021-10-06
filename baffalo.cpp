#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomCharacter();
int encounter_One(int a, int& h, int& s, int& l, int& d, int& m);

int main()
{
	int a = 1,										 //used only while coding in this separate file to set the case
		decision,									 //place holding variable for decisions made in this function
		other_h, other_s, other_l, other_d, other_m, //holds the stats of a entity encountered
		playerAttack = (((l + s) - (other_h + other_s + other_l)) + rand()) % other_h,
		otherAttack = (((l + s) - (other_h + other_s + other_l)) + rand()) % (h / 2),
		h = 40, s = 12, l = 15, d = 45, m = 0; //used in this cpp to hold player stats
	char choice;

	switch (a)
	{
	//bad guy
	case 1:
	{
		cout << "ZOMG!The scent quickly turns foul. Your "
			<< "nostrils\nburn with a whafting mixture of "
			<< "sulfur, excrement, \nand... mulberries!?!? You need "
			<< "not even find it with \nyour eyes, the odor heralds "
			<< "it's approach over the\nnearby hill.\n "
			<< "             A BAFFALO!\n\n";

		other_h = 40; //this section assigns the stats of the enemy
		other_s = 12;
		other_l = 13;
		other_d = 30;
		other_m = 3;

		cout << "Do you investigate, attack, or run away?(I, A, or R)\n";
		cin >> choice;

		if (choice == 'I' || choice == 'i')
		{
			cout << "\nDAT SMELL DOE!!! You sigh. You've heard tales\n"
				<< "about ferocious gorings of the field workers that\n"
				<< "didn't give enough heed to the telltale sweet, sweet\n"
				<< "nose burn that give these guys away; that they are \n"
				<< "fast and strong and... as it crests the hill you begin\n"
				<< "what those people were drinking LMAO. This!? This\n"
				<< "lumbering beast is what strikes fear into the heart of men?\n\n"
				<< "Plugging your nose you walk slowly in to take a look...\n\n"
				<< "The baffalo rears up and RAGES!!! So sad you elected for this\n"
				<< "smell to be your last..."
				<< "\nHealth = ";
			for (h; h >= 0; h--)
			{ //this is a death sequence
				if (h % 15 == 0)
					cout << endl;
				cout << h << "...";
			}
		}
		else if (choice == 'A' || choice == 'a')
		{
			cout << "\nYou grew up hearing tales of such lovable looking, yet\n"
				<< "stomach wrenching beasts; how their calm grass grazing\n"
				<< "ways quickly give way into horn flailing ways. Many a\n"
				<< "negligent farmer has lost their lives to these innocent looking \n"
				<< "mofo's. You decide to rid the world of this guy. You reach to\n"
				<< "draw your sword, only to realize that you don't yet have a\n"
				<< "sword... bummer. You decide a fallen branch will have to do.\n"
				<< "Your ability to attack has been raised by two.\n\n";
			s = s + 2; //maybe write an item gained function
					   // check to see if strike

			do
			{ //battle section
			} while (h > 0 && other_h > 0);

			if (other_h <= 0)
			{ //player wins battle
				cout << "            You WIN!!!\n" cout << "";
			}
			else if (h <= 0)
			{ //player loses battle
				cout << "                 OH NOES!!!\n"
					<< "That last strike -really- gotcha. You flip, spin, and\n"
					<< "      fall to the ground... never to arise again.\n"
					<< "            Guess that's that ::shrugs:: \n\n"
					<< "                GAME OVER!!!\n";
			}
		}
		else if (choice == 'R' == choice == 'r')
		{
			cout << "\nPerhaps you're a bit smarter than you look. Known for goring, \n"
				<< "tearing, trampling, and otherwise providing a bad day for unwitting\n"
				<< "folks, these foul smelling creatures are sometimes best to stear clear\n"
				<< "of. You throw both hands into the air and run screaming back towards town\n";
		}
		else
		{
			cout << "\nWhile you were busy figuring out how to use \n"
				<< "a keyboard the Grim Reaper came and ated all \n"
				<< "your tomorrows. Sorry yo...\n\nHeatlh = ";
			for (h; h >= 0; h--)
			{ //death sequence
				if (h % 15 == 0)
					cout << endl;
				cout << h << "...";
			}
		}
		break;
	}
		while (h > 0 && other_h > 0)
			;
	}
	return 0;
}
