#include<iostream>

using namespace std ;


class Person{
	char name[30] ;
	int age ;
	
	public:
		void getData(void) ;
		void display(void) ;
};

void Person :: getData(void) {
	cout<<"Whats your name: "<<endl ;
	cin>> name ;
	cout<<"Your age: "<<endl ;
	cin>>age ;
}

void Person :: display(void) {
	cout<<"welcome "<<name <<endl ;
	cout<<"Age "<<age << endl ;
}

int main(){
	Person p ;
	p.getData() ;
	p.display() ;
	return 0 ;
}
