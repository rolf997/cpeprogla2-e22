#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int fizzBuzz(int x){
 x=1;
 
	
	for(x=1; x<=100; x++){
		
		if(x % 15 == 0){
			cout<<"FizzBuzz"<<endl;
		}
		if(x % 3 == 0){
			cout<<"Fizz"<<endl;
		}
		else if(x % 5 == 0){
			cout<<"Buzz"<<endl;
		}
		else {
			cout<<x<<endl;
		}
	}
	return 0;
}

int hashmat(int x, int y){
	cout<<endl<<endl<<endl
	<<"Hashmat Problem: ";
	cin>>x>>y;
	cout<<"The difference is: "<<abs(x-y)<<endl;
	}


main(){
	int n,x,y,z;
	n=1;
		switch(n){
			case 1:
				 fizzBuzz(z);
			
		case 2:
				 hashmat(x,y);
				break;
			
		default:
			cout<<"ERROR---ERROR---ERROR---ERROR";
	}
}
