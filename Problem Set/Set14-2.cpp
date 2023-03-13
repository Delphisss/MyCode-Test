#include <iostream>
using namespace std;

//Pass-by-Reference
    void myfunc(int &x,int &y){
    int temp = x;
    x += y/2;
    y += temp/2;
    }

//ให้เขียน Pass-by-Reference โดยใช้ Pointer ใช้ * ชี้ทั้งหมด
    void myfunc(int *x,int *y){
    int temp = *x;
    *x += *y/2;
    *y += temp/2;
    }



