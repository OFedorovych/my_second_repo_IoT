using namespace std;
#include <iostream>
#include <iomanip>
#include "Matrix.h"

Matrix::Matrix()
{
	M[0].setValue(0, 31);	M[1].setValue(0, 65);  M[2].setValue(0, -83);	M[3].setValue(0, -2);	M[4].setValue(0, -85);
	M[0].setValue(1, 9);	M[1].setValue(1, -2);  M[2].setValue(1, 11);	M[3].setValue(1, -4);	M[4].setValue(1, 70);
	M[0].setValue(2, 52);	M[1].setValue(2, 73);  M[2].setValue(2, -8);	M[3].setValue(2, -1);	M[4].setValue(2, 60);
	M[0].setValue(3, 57);	M[1].setValue(3, 83);  M[2].setValue(3, -1);	M[3].setValue(3, 82);	M[4].setValue(3, 50);
	M[0].setValue(4, 1);	M[1].setValue(4, -3);  M[2].setValue(4, -2);	M[3].setValue(4, 78);	M[4].setValue(4, -9);
};

void Matrix::Sort()
{
	for(int i = 0; i < 5; i++)
		M[i].mergeSort(0, 4);
};

void Matrix::Input()
{
	int temp;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> temp;
			M[i].setValue(j, temp);
		}
	}
}


void Matrix::Show()
{
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			cout << setw(10) << M[i].getValue(j);
		}
		cout << endl;
	}
}

int Sum(Matrix Q)
{
	int sum = 0;
	for (int j = 1; j < 5; j++) {
		for (int i = j; i < 5; i++) {
			sum += Q.M[i].getValue(j);
		}
	}return sum;
}



float F(Matrix Q)
{
	int mul = 1;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			mul*= Q.M[i].getValue(j);
		}
	}
	double res = pow(-mul, 0.04); // 1:25
	return -res;
}
