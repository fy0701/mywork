#include <iostream>
using namespace std;

namespace iotek{
	int output_info(int age,char** argv)
	{
		if(argv == 0){
			cout << "My name is secret\n";
			cout << age << "years old\n";
		}
		else{
			cout << "My name is " << argv;
			cout << age << "years old\n";	
		}
		return 0;	
	}
}
