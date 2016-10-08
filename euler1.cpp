
#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int input;
	
	while (f>>input){
	      int answer = 0;
     for (int i = 0; i < input; i++){
          if ((i%3 == 0) || (i%5 == 0)) {answer += i;}
     }
     cout << endl << answer << endl;
     return 0;
	}
	system ("pause > 0");
}
