#include <iostream>

using namespace std;

int main() {

int i; // for loop varibale
int floorNum; // floor which user would like to go to
int currFloor = 1; // floor in which user is currently in
int minFloor = 1; // minimum floor number
int maxFloor = 15; // maximum floor number
bool elevator = true; // variable for while loop
char E; // exit/continue variable

cout << "The elevator begins on the 1st floor\n";

while (elevator){

     
    cout << "Which floor would you like to go to?: ";
    cin >> floorNum;
    cout << "Starting at floor " << currFloor << "\n";

    if (floorNum <= maxFloor && floorNum >= minFloor) {
        if (floorNum > currFloor) {
            for (i = currFloor + 1; i <= floorNum; i++) {
    
                cout << "Going up, currently on floor " << i << "\n";            
            }

                cout << "Stopped at floor " << floorNum << "\n";
                cout << "Would you like to exit the elevator?\n('y' for yes, 'n' for no): ";
                cin >> E;

                    if (E == 'y') {
                        cout << "You have exited the elevator.\n";
                        break;
                    }
                    else if (E == 'n') {
                        currFloor = floorNum;
                        continue;
                    }
                    else {
                        cout << "please enter 'y' for yes or 'n' for no\n";
                        break;
                    }
        }

        else if (floorNum < currFloor) {
            for (i = currFloor - 1; i >= floorNum; i--) {
    
                cout << "Going down, currently on floor " << i << "\n";
            }
                cout << "Stopped at floor " << floorNum << "\n";
                cout << "Would you like to exit the elevator?\n('y' for yes, 'n' for no): ";
                cin >> E;          

                    if (E == 'y') {
                        cout << "You have exited the elevator.\n";
                        break;
                    }
                    else if (E == 'n') {
                        currFloor = floorNum;
                        continue;
                    }
                    else {
                        cout << "please enter 'y' for yes or 'n' for no\n";
                        break;
                    }
        }
    }

        else {
            cout << "Please enter a valid floor number and try again.\n";
            break;
        }      
}

return 0;

}