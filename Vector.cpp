#include "Vector.h"


Vector::Vector()
{
	;
}

void Vector::SetValue(const int ID, const int value)
{
	V[ID] = value;
}

int Vector::GetValue(const int ID)
{
	return V[ID];
}
;



void Vector::Merge( int first, int last)
{
	int middle, start, final, j;
	int *mas = new int[100];
	middle = (first + last) / 2; 
	start = first;
	final = middle + 1;
	for (j = first; j <= last; j++) 
		if ((start <= middle) && ((final > last) || (V[start] < V[final])))
		{
			mas[j] = V[start];
			start++;
		}
		else
		{
			mas[j] = V[final];
			final++;
		}
	
	for (j = first; j <= last; j++) V[j] = mas[j];
	delete[]mas;
};


void Vector::MergeSort(int first, int last)
{
	{
		if (first < last)
		{
			MergeSort( first, (first + last) / 2); 
			MergeSort( (first + last) / 2 + 1, last); 
			Merge( first, last); 
		}
	}
};



