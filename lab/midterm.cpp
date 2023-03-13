#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int mystery(int x){
    if (x<10)
        return x;
    else{
        return mystery(x/10)+(x%10);
    }
}
int main(){
    cout << mystery(87);
    return 0;
}
   
