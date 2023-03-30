#include <iostream>
using namespace std;

int main(){

    int a = 98 ;
    int *b = &a ;
    int **c = &b;
    int ***d = &c;


    cout << a << endl;
    cout << &a << endl;
    cout << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << endl;
    cout << c << endl;
    cout <<&c << endl;
    cout << endl;
    cout << d << endl;
    cout << &d << endl;
    cout << endl;

    int *p ;
    p = &a ;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

	return 0;
}
