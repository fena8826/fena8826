#include<iostream>
using namespace std;


//alphabet 


int main(){
	char alphabet ='a';
	int skip = 3;
	
	do{
		cout<<alphabet<<",";
		alphabet +=skip+1;
		}
		while (alphabet<='z');
		
		return 0;
}