using namespace std;

#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix M20;
	//M20.Input();
	cout << "start" << endl;
	M20.Show();
	M20.Sort();
	cout << "Sorted matrix:" << endl;
	M20.Show();


	cout << "Sum: " << Sum (M20) << endl;
	cout << "F: " << F(M20);

}

