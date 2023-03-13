#include <iostream>
using namespace std;

int main(){
    int a = 69;
    int *b = &a;
    int **c = &b;

//ข้อใดได้ 69
    system("cls");
    cout << "A = " << &a << endl;  // ตำแหน่ง
//  cout << "B" << *a << endl; // รันบ่ผ่านไม่มี *a
    cout << "C = " << b << endl; // ตำแหน่ง
    cout << "D = " << &b << endl; // ตำแหน่ง
    cout << "E = " << &c << endl; // ตำแหน่ง
    cout << "F = " << *c << endl; // ตำแหน่ง
    cout << "G = " << **c << endl; // 69
    cout << "H = " << c << endl;  //ตำแหน่ง
//ข้อ G
}