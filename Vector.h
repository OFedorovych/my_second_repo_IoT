#pragma once
class Vector
{
private:
	int V[5];

public:
	Vector();
	void setValue(const int ID, const int value);
	int getValue(const int ID);
	void mergeSort( int first, int last);

protected:
	void Merge(int first, int last);
};