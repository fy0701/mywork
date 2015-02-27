#include <iostream>
using namespace std;

#include "name.h"
using namespace iotek;

int main(int argc,char** argv)
{	
	int age = 0;
	int a = output_info();
	
	cout << "input age:";
	cin >> age;
	a = output_info(age,argv);

	cout << a << endl;
	
	return 0;
}
