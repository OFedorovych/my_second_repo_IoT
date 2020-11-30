#pragma once
class Vector
{
private:
	int V[5];

public:
	Vector();
	void SetValue(const int ID, const int value);
	int GetValue(const int ID);
	void MergeSort( int first, int last);

protected:
	void Merge(int first, int last);
};