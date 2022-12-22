#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    int h;
    int p;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> h;
        if(h < 160){
            status = "UNFRIEND";
        }
        else{
            if(h < 175){
                status = "FRIEND";
            }
            else{
                cout << "Enter your property: ";
                cin >> p;
                if(p > 69000000){
                    status = "MARRIED";
                }
                else{
                    status = "ONE-NIGHT-STAND";
                }
            }
        }
    }
    else{
        if(age < 30){
            cout << "Enter your property: ";
            cin >> p;
            if (p > 10000000){
                status = "BEST FRIEND";
            }
            else{
                status = "UNFRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }     
    }
    cout << "Your status = " << status;
}


/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/