#include<iostream>

using namespace std ;

int main(){
	
	int a = 100 ;
	if(a < 50){
		if(a > 200){
			cout<<"inner if block" << "\n" ;
		}
//		else{
//			cout<<"inner else block" << endl;
//		}
	}else{
		cout<<"outter else block" << "\n" ;
	}
	cout<<"Outside if else block" ;
	return 0 ;
}
