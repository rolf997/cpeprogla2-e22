#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void problem1(){
	string str1, str2;
	cout<<"************************"<<endl
		<<"String Compare"<<endl
		<<"************************"<<endl
		<<"Enter a first word (str1): ";
		getline(cin, str1);
		cout<<"Enter a second word (str2): ";
		getline(cin, str2);
		
		if(str2.compare(str1)<0){
			cout<<"positive"<<endl<<endl<<endl;
		}
		else if(str2.compare(str1)==0){
			cout<<"equal"<<endl<<endl<<endl;
		}
		else{
			cout<<"negative"<<endl<<endl<<endl;
		}
}
void problem2(){
	char str1[100];
	char str2[100];
	cout<<"************************"<<endl
		<<"String Copy"<<endl
		<<"************************"<<endl;
	cout<<"Enter a first word (str1): ";
	cin>>str1;
	cout<<"Enter a second word (str2): ";
	cin>>str2;
	cout<<"new value for str1 is: "<<strcpy(str2, str2)<<endl<<endl<<endl;
	
}
void problem3(){
	char str1[100];
	char str2[100]; 
		cout<<"************************"<<endl
		<<"String Concatinate"<<endl
		<<"************************"<<endl
		<<"Enter a first Word (str1): ";
		cin.ignore();
	cin.getline(str1, 99); 
		cout<<"Enter a second word: (str2): ";
	cin.getline(str2, 99);
	cout<<"new value for str1 is: "<<strcat(str1, str2)<<endl<<endl<<endl;
}
void problem4(){
	   char str1[20];
    int i, length;
    int flag = 0;
    	cout<<"************************"<<endl
		<<"Palindrome"<<endl
		<<"************************"<<endl
 		<< "Enter a word: ";
    cin >> str1;
    
    length = strlen(str1);
    
    for(i=0;i < length ;i++){
        if(str1[i] != str1[length-i-1]){
            flag = 1;
            break;
	   }
	}
    
    if (flag) {
        cout << str1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << str1 << " is a palindrome" << endl; 
    }
}
	

main(){
	int x;
	char str1[100],str2[100];
	x=1;
	switch(x){
	
		case 1:
			 problem1();
			 
		case 2:
			 problem2();
		
		case 3:
			problem3();
		
		case 4:
			problem4();
			
		default:
			;
			 
}
}

