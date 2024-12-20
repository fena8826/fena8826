#include<iostream>
using namespace std;

//Number of digits

int main(){
	int number;
	cout<<"Enter any number:";
	cin>>number;
	
	int count=0;
	while(number !=0){
		number /=10;
		count++;
		
	}
	
	cout<< "total number of digits:"<<count<<endl;
	return 0;
}