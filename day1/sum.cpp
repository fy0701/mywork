#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
	int number1 = 0;
	int number2 = 0;
	int sum = 0;
	
	cout << "enter the first number:";
	cin >> number1;
	cout <<"enter the second number:";
	cin >> number2;

	sum = number1 + number2;
	cout << sum << endl;
	return 0;
}
