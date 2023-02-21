#include <iostream>
#include <conio.h> // for getch() function

using namespace std;

void highlight(int index) {
    if (index == 1) {
        cout << "\033[1;7m"; // set background and foreground color to white and black
    }
    else {
        cout << "\033[0m"; // reset the color to default
    }
}

int main() {
    int choice = 1;
    char ch;
    do {
        system("cls"); // clear the console
        cout << "ATM Menu\n";
        highlight(1);
        cout << "1. Deposit\n";
        highlight(2);
        cout << "2. Withdraw\n";
        highlight(3);
        cout << "3. Balance Inquiry\n";
        highlight(4);
        cout << "4. Exit\n";
        highlight(0);
        ch = getch(); // wait for a key press
        if (ch == 72 && choice > 1) { // up arrow key
            choice--;
        }
        else if (ch == 80 && choice < 4) { // down arrow key
            choice++;
        }
    } while (ch != 13); // enter key
    switch (choice) {
        case 1:
            cout << "test1" << endl ; 
            break;
        case 2:
            cout << "test2" << endl ;
            break;
        case 3:
            cout << "test3" << endl ;
            break;
        case 4:
            cout << "test4" << endl ;
            break;
    }
    return 0;
}