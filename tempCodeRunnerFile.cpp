#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int M;
    cin >> M;
    for(int i=0 ; i < M; i++ ){
            if(i%2 == 0){
            cout << 0 ;
            }else
            cout << 1 ;
    }
    cout << endl;
   
    if(M%2 == 0){
        for(int i=2 ; i < M; i++ ){
            if(i%2 == 0){
            cout << 1 << setw(M-1)  << 0 << endl ;
            }else
            cout << 0 << setw(M-1)<< 1 << endl ;
    }
    }else{ 
        for(int i=2 ; i < M; i++ ){
            if(i%2 == 0){
            cout << 1 << setw(M-1)  << 1 << endl ;
            }else
            cout << 0 << setw(M-1)<< 0 << endl ;
    }
    }

    if(M%2 ==0){
        for(int i=0 ; i < M; i++ ){
            if(i%2 == 0){
            cout << 1 ;
            }else
            cout << 0 ;
        }
    }else{
        for(int i=0 ; i < M; i++ ){
            if(i%2 == 0){
            cout << 0 ;
            }else
            cout << 1 ;
    }
    }
    
    
    return 0;
}

/* int k = 1;
    int j = 1;
    int o = 0;
    int p = 0;
    if(M%2){
        k = 1 ;
        j = 1 ;
    }*/