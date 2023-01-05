#include <iostream>
#include <cstdlib> // rand(0-32767)   srand(seed)
#include <ctime> // time(0) s
using namespace std;

int main(){
    cout << "what is your korean name??";
    cin.get(); //รับ1เคาะ
    srand(time(0));
    int x = rand()%5;
    //cout << x ;
    cout << "My korean name = " ; 
    if(x == 0) cout << "Neul" ;
    else if(x == 1) cout << "Woo" ;
    else if(x == 2) cout << "Kyo" ;
    else if(x == 3) cout << "Kyung " ;
    else if(x == 4) cout << "Gun" ;
    else cout << "Won" ;

    return 0 ;

}