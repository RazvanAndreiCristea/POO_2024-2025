#include "SortingHelper.h"

template <typename T>
void interschimbare(T& x, T& y)
{
	T aux = x;
	x = y;
	y = aux;
}

template<typename T>
void sortare(T*& arr, const int& dimensiune)
{
	if (arr == nullptr)
	{
		return;
	}

	for (int i = 0; i < dimensiune - 1; i++)
	{
		for (int j = i + 1; j < dimensiune; j++)
		{
			if (arr[i] < arr[j])
			{
				interschimbare(arr[i], arr[j]);
			}
		}
	}
}

void testareSortare()
{
	int n1 = 4;
	int* arr1 = new int [n1] { 0, -1, -2, 1 };

	int n2 = 5;
	Triunghi* arr2 = new Triunghi[n2]
	{
		Triunghi(4.5f, 2.25f),
		Triunghi(4.5f, 2.25f),
		Triunghi(4.5f, 2.25f),
		Triunghi(4.5f, 2.25f),
		Triunghi(4.5f, 2.25f)
	};

	int n3 = 5;
	NrComplex* arr3 = new NrComplex[n3]
	{
		NrComplex(4.5f, 2.25f),
		NrComplex(4.5f, 2.25f),
		NrComplex(4.5f, 2.25f),
		NrComplex(4.5f, 2.25f),
		NrComplex(4.5f, 2.25f)
	};

	sortare(arr1, n1);
	sortare(arr2, n2);
	sortare(arr3, n3);

	delete[] arr1;
	delete[] arr2;
	delete[] arr3;
}