#include<iostream>
#include<set>
using namespace std;

int count(int a[],int N){
	set<int> b;
	for(int i=0;i<N;i++){	
		b.insert(a[i]);
	}
	return b.size();
}
//Write function count() here.

int main(){	
	system("cls");
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}