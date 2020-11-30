#pragma once
#include "Vector.h"

class Matrix
{
private:
	Vector M[5];
public:
	Matrix();
	void Input();
	void Show();
	void Sort();


	friend int Sum(Matrix Q);
	friend float F(Matrix Q);
};

