#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);
// หาสูตรจากในเน็ตแม่งเลย
int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0]; //ค่าเฉลี่ยเลขคณิต
    cout << "\nStandard Deviation = " << B[1]; //ส่วนเบี่ยงเบนมาตรฐาน
    cout << "\nGeometric Mean = " << B[2]; // ค่าเฉลี่ยเรขาคณิต
    cout << "\nHarmonic Mean = " << B[3]; //ค่าเฉลี่ยฮาร์มอนิก
    cout << "\nMax = " << B[4]; //ค่าสูงสุด
    cout << "\nMin = " << B[5]; //ค่าต่ำสุด
    return 0;
}
//ค่าเฉลี่ยเลขคณิต
double M(const double s[],int n){
    double sum = 0;
    for(int i=0; i < n; i++){
        sum += s[i];
    }
    return sum/n;
}
//ส่วนเบี่ยงเบนมาตรฐาน
double SD(const double s[],int n){
    double sum = 0;
    double sd;
    for(int i = 0;i<n;i++){
        sum += pow(s[i],2);
    }
    sd = sqrt((sum/n)-(pow(M(s,n),2)));
    return sd;
}
// ค่าเฉลี่ยเรขาคณิต
double GM(const double s[],int n){
    double x = 1;
    for(int i = 0;i<n;i++){
        x *= s[i];
    }
    return pow(x,(double)1/n);
}
//ค่าเฉลี่ยฮาร์มอนิก
double HM(const double s[],int n){
    double x = 0;
    for (int i = 0; i < n; i++)
        x = x + (double)1 / s[i];
 
    return (double)n/x;
}
//ค่าสูงสุด
double Max(const double s[],int n){
    double max = s[0];
    for (int i = 0; i < n; i++)
        if(s[i]>max) max =s[i];
 
    return max;
}
//ค่าต่ำสุด
double Min(const double s[],int n){
    double min = s[0];
    for (int i = 0; i < n; i++)
        if(s[i]<min) min =s[i];
 
    return min;
}



void stat(const double A[],int N,double B[]){
    B[0] = M(A,N);
    B[1] = SD(A,N);
    B[2] = GM(A,N);
    B[3] = HM(A,N);
    B[4] = Max(A,N);
    B[5] = Min(A,N);
}

//Kong >w<