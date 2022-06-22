#include<iostream>

using namespace std ;

int iAmGlobal = 100 ;

void printGlobal(){
	cout<<"Inside another function: "<<iAmGlobal ;
}

int main(){
	
	cout<<"Inside main: "<<iAmGlobal <<"\n" ;
	int iAmGlobal = 50 ;
	cout<<"Inside main update global:"<< iAmGlobal <<"\n";
	iAmGlobal -= 10 ;
	cout<<"decreasing global variable by 10: "<< iAmGlobal <<"\n";
	printGlobal() ;
	return 0 ;
}

/*
Inside main: 100
Inside main update global:50
Inside another function: 100

-------------------------------



*/


