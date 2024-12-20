#include<iostream>
using namespace std;

int main(){
	 int number;
	 cout<<"Enter any number:";
	 cin>>number;
	 
	 int firstdigit= number;
	 while(firstdigit>=10){
	 	firstdigit/=10;
	 }
	 int lastdigit=number % 10;
	 
	 
	 int sum=firstdigit+lastdigit;
	 
	 
	 cout<<"sum of the first and last digits:"<<sum<<endl;
	 
	 return 0;
}