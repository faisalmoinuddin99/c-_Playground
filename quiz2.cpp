/*
@Problem Statement:

Assume that we would like to read two numbers from the keyboard and display their average on the screen.

*/

#include<iostream>

using namespace std ;

class Calculator{
	
	float number1, number2 ;
	
	public:
		void getInput(void) ;
		void display(void) ;
};

void Calculator :: getInput(void) {
	cout<<"Enter first number: "<<endl ;
	cin>>number1 ;
	cout<<"Enter second number: "<<endl ;
	cin>>number2 ;
}

void Calculator :: display(void){
	float avg = (number1 + number2) / 2 ;
	cout<<"Average: "<<avg<<endl ;
}

int main(){
	Calculator c ;
	c.getInput() ;
	c.display() ;
	return 0 ;
}


/*
Output:

Enter first number:
10
Enter second number:
20
Average: 15

*/
