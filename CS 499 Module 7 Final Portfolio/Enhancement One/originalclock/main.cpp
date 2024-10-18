//Project One by Faizah.
#include "Header.h"
// Display the clocks side by side with proper structure.
//Displaying the time
void displayTime(const Clock12& userClock12, const Clock24& userClock24) {
    cout <<
//The boxes are here
"*************************\t\t*************************" << endl;
    cout << "*   12-Hour Clock      *\t\t*\t   24-Hour Clock    *" << endl;
    cout << "*   " << setw(18) << left << userClock12.getTime() << " *\t\t*\t  " << setw(18) << left << userClock24.getTime() <<"*" << endl;
    cout << "*************************\t\t*************************" << endl;
}

void displayMenu() {
    cout << "\n*************************" << endl;
    cout << "* 1 - Add One Hour    *" << endl;
    cout << "* 2 - Add One Minute  *" << endl;
    cout << "* 3 - Add One Second  *" << endl;
    cout << "* 4 - Exit Program    *" << endl;
    cout << "*************************" << endl;
}

int main() {
    Clock12 clock12; // Here, I create a 12-hour clock
    Clock24 clock24; // And here, I create a 24-hour clock

    int userSelection = 0;
//So, this is how the clock works.
    while (userSelection != 4) {
        displayTime(clock12, clock24);
      //The menu displays.
        displayMenu();
        cin >> userSelection;
        switch (userSelection) {
            case 1:
                clock12.addHour(1);
                clock24.addHour(1);
                break;
            case 2:
                clock12.addMinute(1);
                clock24.addMinute(1);
                break;
            case 3:
                clock12.addSecond(1);
                clock24.addSecond(1);
                break;
          //Exit Program
            case 4:
                cout << "Exiting Program" << endl;
                break;
            default:
//When you pick something invalid here.
                cout << "Invalid selection. Please make a selection from the menu" << endl;
        }
    }
    return 0;
}
