#include <iostream>
#include <string>
using namespace std;

void sort3ints(int *a ,int *b ,int *c){
int x,y,z,j,k,l ;
    *a = *a ;
    *b = *b ;
    *c = *c ;
    x = *a ;
    y = *b ;
    z = *c ;
    if (x < y)
        {
            j = x;
            x = y; 
            y = j;
        }
    if (y < z)
        {
            k = y;
            y = z; 
            z = k;
        }
    if (x < y)
        {
            j = x;
            x = y; 
            y = j;
        }
    *a = x ;
    *b = y ;
    *c = z ;

}

int main(){

    system("cls");
    int a = 1, b = 5, c = 3;
    sort3ints(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}



    /*
    sort3ints(a,b,c);
    cout << a << endl << b << endl  << c << endl ;

    sort3ints(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    */