#include <iostream> //เรียกใช้ library 
#include <cstdlib> // c standard library ใช้เมื่อ ใช้คำสั่งภาษา c แปลงตัวอักษรเป็นเลข etc.
#include <cmath> //ใช้เมื่อ มีการใช้เครื่องหมายทางคณิตศาสตร์ Pi,pow,sqrt etc.
#include <ctime> //ใช้เกี่ยวกับเวลา srand rand etc.
#include <string> //ใช้กับ stod sto_ สร้างตัวแปรใช้เก็บข้อความ
#include <iomanip>  //set(w) setprecision 
#include <fstream> //เรียกใช้เมื่อดึงข้อมูลจากไฟล์อื่นหรือสร้างไฟล์อื่น dest ifstram ofstream 
using namespace std ; //ใช้้ namespace standard เวลาพิมพ์จได้ไม่ต้องใช้ std :: 


/* 
                                                    Lecture 4 Function I
การสร้างฟังก์ชัน 

Return type function_name(input type)
return = ชนิดและค่าที่ฟังก์ชันจะส่งออกไป
funtion_name = ชื่อฟังก์ชัน
input type = ค่าที่ฟังก์ชันรับมาใช้ในฟังก์ชัน 

Ex

double square(int x,float y)
    {
    double z = x * y ;
    return z ;
    }
                                                    Lecture 12 Function II

Local variable = ตัวแปรที่ใช้แค่่ใน scope ใด scope หนึ่ง ไม่ถูกใช้รวม
Global variable = ตัวแปรที่ใช้ได้ทุกที่ Ex. ::a 


                Call By Value = ใช้ค่าที่ copy variable จากตัวต้นเมื่อค่าเปลี่ยนไป ค่าเดิมจะไม่เปลี่ยนตาม
ex  
int Square(int t)
    return t * t ;
   
    int main ()
    {
        int x = 5 ;
        cout << Square(x) ;
        return 0 ;
    }
ก็คือ เมื่อ x ที่ เท่ากับ 5 แทนลงไปในฟังก์ชัน ค่าที่ return กลับมาคือ  25 แต่ค่าของ x ยังคงเป็น 5 เหมือนเดิม  
                
                  Call By Reference = เมื่อตัวแปรในฟังก์ชันเมื่อเรียกใช้เปลี่ยนไป ค่าของตัวแปรจะเปลี่ยนตาม
ex .
    int square(int &a) 
    {
        return a*a ;
    }
    int main() 
    {
        int x = 5 ;
        cout << square (x)  ;
    }
    ก็คือ เมื่อ x ที่ เท่ากับ 5 แทนลงไปในฟังก์ชัน ค่าที่ return กลับมาคือ  25 ค่าของ x จะถูกเปลี่ยนเป็น 25 ตาม 

    

                                        Random Number generation = การสุ่มตัวเลข
    ในการสุ่มตัวเลข เราจะใช่้ #include<cstdlib>
    ในการใช้หน่วนเวลา เราจะใช้ #include <ctime> 

    srand() = การกำหนดค่า seed เริ่มต้น
    rand () = สุ่มตัวเลข

ex. 
int main()
{
    srand (265) ; 
    cout << rand() ;

} 

เมื่อนำไปรัน ค่าที่ออกมา จะเป็นค่าเดิมเสมอ เนื่องจาก seed มันคงที่ เลยสุ่มออกมายังไงก็ได้เลขเดิม

เราจะทำยังไงให้ seed ไม่คงที่? 
ใช้ เวลาสิ 
 time(0) = คือค่าเวลาที่เริ่มนับมาตั้งแต่ 1 มค 1970 เป็นหน่วยวินาที  ทำให้ค่าไม่คงที่ถูกเปลี่ยนไปทุกๆวินาที
 srand(time(0)) =  สุ่ม seed ในทุกๆวินาทีค่าเลยถูก random ตลอด

srand (time(0)) ; 
cout << rand()  ;
ค่าจะถูกสุ่ม เมื่อรัน เลขก็จะเปลี่ยนตลอด

สุ่มให้อยู่ในช่วง 

rand()% 10 จะสุ่มเลขตั้งแต่ 0 ถึง 9 เพื่อจะได้เงื่อนไขทั้ง 10 แบบที่สามารถทำได้
    
    x = rand()% 9  ;
    if (x == 1) condition 1
    else if (x == 2) condition 2 
    else if (x== 3) condition 3
                                                 
                                                 
                                                    Lecture 5 Array I
การประกาศ Array  
    type arrayName [arraySize]
    type = ประเภทที่ array จะเก็บข้อมูล int double string char etc.
    arrayName = ชื่ออาเรย์ 
    arraySize = ขนาดอาเรย์ว่าเก็บข้อมูลได้กี่ชุด
ex .
    int x[5] = {1,2,3,4,5} ; อาเรย์ x เก็บจำนวนเต็มได้ 5 ค่า คือ 1 2 3 4 5
    int x[] = {1,2,3,4,5}  ; อาเรย์ x ก็มีขนาดเท่ากับ 5 เหมือนกัน 
    int x[5] = {1,2} ;   อาเรย์ x เก็บ 5 ค่าแต่ที่ประกาศมี 2 ค่า ในอาเรย์ จะมี 1 2 0 0 0 
    int x[5] = {1,2,3,4,5,6} ; อาเรย์ x เก็บได้ 5 ค่าแต่ภายในมี 6 ค่า = error : too many intializers 

        ตำแหน่ง ของอาเรย์ 
     int x[5] = {1,2,3,4,5} ;
     ตำแหน่งอาเรย์ x[0] = 1 x[1]=2 x[2]=3 x[3] =4   x[4]= 5
     cout << x[3] ค่าที่ออกจะคือ 4
     x[5-2] = x[3] 

                                                    Lecture 14 Array II 
    
    int a[6] = {1,2,3,4,5,6} ;
    หาจำนวน array  
    sizeof(a)/sizeof(a[0]) 
    sizeof(a) = ขนาดของทั้งอาเรย์ หน่วย byte 
    sizeof(a[0]) = ขนาดของตำแหน่งที่ 1 ของอาเรย์ a มีหน่วยเป็น byte 
    cout << a  ค่าที่ออกมาจะเป็น Adress  ex. 0*22fd80 

        Arrays C style
        การประกาศ arrays ในภาษา C 

        char s1[] = {'h','e','l','l','o','\0'}  \0 คือการหยุดอาเรย์
    หากไม่มีตัวหยุด อาเรย์จะมองว่ามันไม่ได้มีตัวหนังสือแค่นั้น
ex.
       char x[] = {'h','e','l','l','o'} ;
    cout << x;  ค่าที่ออกใน terminal คือ hellogÇ

*/