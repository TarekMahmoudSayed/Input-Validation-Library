#include <iostream>
#include "clsInputValidate.h"

using namespace std; 


int main() {

	cout << "please enter Number : ";
	double x = clsInputValidate::ReadDblNumber();
	cout << x << endl;


	return  0;
}