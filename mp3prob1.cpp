#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int a;
	string str1, str2;
	cout<<"************************"<<endl
		<<"String Compare"<<endl
		<<"************************"<<endl
		<<"Enter a first word (str1): ";
		getline(cin, str1);
		cout<<"Enter a second word (str2): ";
		getline(cin, str2);
		
		if(str2.compare(str1)<0){
			cout<<"negative"<<endl;
		}
		else{
			cout<<"positive"<<endl;
		}
}
