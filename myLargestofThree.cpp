#include <iostream>
using namespace std;
int main(){
	//Declaring my variables
	int num1,num2,num3 = 0;
	int largest = 0;
	int total = 0;

	//getting my integers from the user.
	cout << "Enter your first choice" << endl;
	cin >> num1;
	cout << "Now enter your second choice" << endl;
	cin >> num2;
	cout << "Enter your last choice" << endl;
	cin >> num3;

	//Now getting my total by adding all the ints together .
	total = num1 + num2 + num3;

	//Now we find the largest int
	if(num1 > num2){
		if(num1 > num3){//we need this if statement.
			largest = num1;
		}else{
			largest = num3;
		}
	}else{
		if(num2 > num3){
			largest = num2;
		}else{
			largest = num3;
		}
	}
	//outputing the largest and total of the ints collected
	cout << "The Largest of: " << num1<< " and " << num2 << " and " << num3 << " is " <<largest << endl;
	cout << "The total is: " << total << endl;
	cout << "The largest is " << largest << endl;
}
