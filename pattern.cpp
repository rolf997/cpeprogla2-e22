#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;



int main(){
		ifstream f("input.txt");
	int input, input2;
    int arr[]={1,2,4,3};
    int x=0;

	while (f>>input>>input2){
	cout<<input<<" ";
	input+=arr[(x%4)];
  	for(input; input<=input2; input+=arr[(x%4)]){
	  cout <<input<<" ";
      x++;

}

    system("pause");
    return 0;
}

}
