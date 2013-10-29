#include <iostream>
#include <string>
#include "critter.h"
using namespace std;


int main()
{
    Critter crit; //defining an object of class critter
    crit.Talk();
	string choice;
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n";
        cout << "4 - Show Critter's current stats\n\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice[0]) //replaces a heap of if-elses
        {
        case '0':	
            cout << "Thank you for playing! goob-bye.\n";
		break;
        case '1':	
            crit.Talk();
		break;
        case '2':	
            crit.Eat();
		break;
        case '3':	
            crit.Play();
		break;
        case '4':
            crit.Showstats();
                break;
        default:    //alvays want one of theses
            cout << "\nSorry, but " << choice << " is invalid, please try again.\n";
        }
    }while ( choice[0] != 0 );

    return 0;
}