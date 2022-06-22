#include<iostream>

using namespace std ;

int main(){
	
	// take two numbers from user and do the addition
	int num1, num2 ;
	cout<<"Enter the value of number 1:"<<"\n" ;// '<<' insertion operator
	cin>> num1 ; // '>>' extraction operator
	cout<<"Enter the value of number 2:" << "\n" ;
	cin>>num2 ;
	
	cout<<"Total: "<<num1 + num2 <<"\n" ; 
	
	int a = 68 ;
	char v = a ;
	cout << v ;
	return 0 ;
}

/*
Enter the value of number 1:
10
Enter the value of number 2:
20
Total: 30
*/
