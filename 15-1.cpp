#include <iostream>
using namespace std;

template <typename T> //เทมเพจ
//void insertionSort เขียนเพิ่ม ในส่วนของนิยาม เรียงจากมากไปน้อย
void insertionSort(T d[],int N){
    for(int i=1;i<N;i++){ //ให้ i = 1 โดยที่ i น้อยกว่า N ให้วนจนกว่า i ไม่่น้อยหรือเท่ากับ N
		cout << "Pass " << i << ":"; // แสดงแถว
		
		int j= i-1; //กำหนดให้ j = i-1โดยที่ i มาจากข้างบนนั้นแหละ มันจะใช้ i ที่เพิ่มขึ้นในแต่ละลูปมาคิด ที่ลบ1เพราะใน[]มันเริ่มที่0
    	T key = d[i]; //สร้างช่องมาไว้1ช่อง เพื่อเอาไว้สลับค่า
    	while(d[j]<key && j>=0) //ใช้  while-loop ใช้เพื่อทำสั่งโค้ดของโปรแกรมในขณะที่ expression เป็นจริงและมันจะสิ้นสุดการทำงานเมื่อ expression ไม่เท็จและออกจาก while-loop และทำคำสั่งอื่นต่อไป
    	{
           d[j+1]=d[j]; //สลับที่
           j--;
    	}
       d[j+1]=key; //เอาแล้วค่าที่สลับ มาเก็บบัญัติให้เท่ากับ key ที่สร้างไว้ในที่บรรทัดที่ 11

		for(int j=0;j < N;j++){  //ใช้for loop มา ใช้เป็นลูปที่มีการวนรอบเป็นจำนวนที่แน่นอน มันจะวนซ้ำจนกว่า expressionจะเป็นเท็จ
			cout << d[j] ;
			if(j!=N-1) cout << " ";
		}
		cout << endl;
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}