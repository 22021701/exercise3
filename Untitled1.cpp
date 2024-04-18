#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout<<"Enter number below:\n";
	cin >>num;
	
	if (num >= 0){
		
		if (num == 0){
			cout<<"The number is zero ";
			
		}
		else {
			cout << "The number is positive";
		}
	}
	else {
		cout << "The number is negative";
	}
	
}
