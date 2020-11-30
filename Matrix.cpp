using namespace std;
#include <iostream>
#include <iomanip>
#include "Matrix.h"

Matrix::Matrix()
{
	M[0].SetValue(0, 31);	M[1].SetValue(0, 65);  M[2].SetValue(0, -83);	M[3].SetValue(0, -2);	M[4].SetValue(0, -85);
	M[0].SetValue(1, 9);	M[1].SetValue(1, -2);  M[2].SetValue(1, 11);	M[3].SetValue(1, -4);	M[4].SetValue(1, 70);
	M[0].SetValue(2, 52);	M[1].SetValue(2, 73);  M[2].SetValue(2, -8);	M[3].SetValue(2, -1);	M[4].SetValue(2, 60);
	M[0].SetValue(3, 57);	M[1].SetValue(3, 83);  M[2].SetValue(3, -1);	M[3].SetValue(3, 82);	M[4].SetValue(3, 50);
	M[0].SetValue(4, 1);	M[1].SetValue(4, -3);  M[2].SetValue(4, -2);	M[3].SetValue(4, 78);	M[4].SetValue(4, -9);
};

void Matrix::Sort()
{
	for(int i = 0; i < 5; i++)
		M[i].MergeSort(0, 4);
};

void Matrix::Input()
{
	int tmp;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tmp;
			M[i].SetValue(j, tmp);
		}
	}
}


void Matrix::Show()
{
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			cout << setw(10) << M[i].GetValue(j);
		}
		cout << endl;
	}
}

int Sum(Matrix Q)
{
	int s = 0;
	for (int j = 1; j < 5; j++) {
		for (int i = j; i < 5; i++) {
			s += Q.M[i].GetValue(j);
		}
	}return s;
}



float F(Matrix Q)
{
	int mul = 1;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			mul*= Q.M[i].GetValue(j);
		}
	}
	float res = pow(-mul, 0.04); // 1:25
	return -res;
}
