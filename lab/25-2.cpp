#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	system("cls");
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice"); //Alice ปวดขี้และมายืนรอคิวเป็นคนแรก
	line_up.push_back("Bob"); //Bob มาต่อแถว
	
	//Oscar มาแซงแถวหน้า Bob
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar"); 
	
	//Luffy, Sanji, Nami มาต่อแถวด้านหลังตามลำดับ
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	
	//2 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	line_up.pop_front();
	line_up.pop_front();


	loc = find(line_up.begin(),line_up.end(),"Sanji");

	//Narutu มาแทรกแถวหลัง Luffy
	line_up.insert(loc,"Narutu");

	//Prayath ท้องเสียปวดขี้สุด ๆ เลยมาแทรกแซวหน้าสุด
	line_up.push_front("Prayath");
	loc = find(line_up.begin(),line_up.end(),"Bob");
	
	//Tony ยอมไม่ได้เลยมาแทรกด้านหลัง Prayath
	line_up.insert(loc,"Tony");

	loc = line_up.begin();
	loc++;
	//Bob ทนไม่ไหวเลย เลยเปลี่ยนใจออกไปขี้ที่อื่น
	line_up.erase(loc);
	line_up.pop_front();
	line_up.pop_front();
	line_up.pop_front();




	//Write your code here
	
	printList(line_up);

		
	return 0;
}