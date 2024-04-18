#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout<<"Enter number below:\n";
	cin >>num;
	
	if (num >= 0){
		
		if (num == 0){
			cout<<num<<" is zero ";
			
		}
		else {
			cout << num << " is positive";
		}
	}
	else {
		cout << num <<" is negative";
	}
	
}
