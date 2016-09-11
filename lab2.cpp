#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;



double problem1(float x){
	cout<<"Problem 1: "<<endl
	<<"Enter a number to be round off: ";
	cin>>x;
	cout<<"Round off value is: "<<round(x)<<endl<<endl<<endl<<endl<<endl;
}


int areaSqu(int side, int area){
	 
	cout<<"Enter the side of the square: ";
	cin>>side;
	area=side*side;
	cout<<"The area is "<<area<<" square units"<<endl;
}

int areaRect(int length, int width){
	
	int area;
	cout<<"Enter the length and width of the rectangle: ";
	cin>>length>>width;
	cout<<endl;
	area=length*width;
	cout<<"The area is "<<area<<" square units";
}

int areaTri(int base, int height){
	
	double area;
	cout<<"Enter the base and the height: ";
	cin>>base>>height;
	cout<<endl;
	area=(base*height)/2;
	cout<<"The area is "<<setprecision(3)<<area<<" square units";
	
}

int areaCir(int radius, float pi){
	
	double area;
	cout<<"Enter the radius of the cirlce: ";
	cin>>radius;
	cout<<endl;
	area=2*3.141519*radius;
	cout<<"The area is "<<setprecision(3)<<area<<" square units";
}

int problem2(int i, int j){
	cout<<"Problem 2: ";
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int num;
	int min = 1;
	int max = 20;
	srand((unsigned) time(NULL)); 
	for(int i =0; i<10; i++){
		num = min + (rand() % (max - min + 1));
		for(int j=0; j<10; j++){
			if(num == uniques[j]){
				num = min + (rand() % (max - min + 1));
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0; i<10; i++){
		cout << uniques[i]<<" ";
	}
}

int problem3(int x,int y){
	cout<<endl<<endl<<endl<<endl<<endl<<"**********Problem 3**********"<<endl
		<<"*****************************"<<endl
		<<"            Menu             "<<endl
		<<"*****************************"<<endl
		<<"[1] - Area of a Square"<<endl
		<<"[2] - Area of a Rectangle"<<endl
		<<"[3] - Area of Triangle"<<endl
		<<"[4] - Area of a Circle"<<endl
		<<"[5] - Exit"<<endl
		<<"-----------------------------"<<endl
		<<"Enter Your Choice: ";
		cin>>x;
		cout<<"-----------------------------"<<endl;
		
		if(x==1){
		
			return areaSqu(x,y);
		}
		else if(x==2){
			
			return areaRect(x,y);
		}
		else if(x==3){
			
			return areaTri(x,y);
		}
		else if(x==4){
			
			return areaCir(x,y);
		}
		else if(x>5){
			
			cout<<"----------Invalid input----------";
		}
		else{
			
			;
		}	
		
		
		}
void max(int a, int b){
     cout<<endl<<endl<<endl<<endl<<"Enter num1: ";
     cin>>a;
     cout<<"Enter num2: ";
     cin>>b;
     if (a<b){
     cout<<b<<" is greater than "<<a<<endl<<endl;
     }
     else{
     	cout<<a<<" is greater than "<<b<<endl<<endl;
          ;
     }
}
	
int call_by_value(int factorial, int num){

 
	cout<<endl<<endl<<endl<<endl<<"Problem 5: "<<endl
    <<"Enter a Number:  ";

    cin>>num;

    for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }

cout<<"Factorial of "<<num<<" is "<<factorial<<endl<<endl;

          
    

}

int main(){
	int n,x,i,j,y,q,p,fact,num;
	n=1;
	
		switch(n){
			case 1:
				problem1(x);
				
			case 2:
				problem2(i, j);
				
				
			case 3:
				problem3(x,y);
			
			case 4:
				max(q,p);
				
			case 5:
				call_by_value(fact, num);
			
			default:
				;
			}
	}
	













       
