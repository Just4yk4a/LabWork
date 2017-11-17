#include <iostream>
using namespace std;

void InputMatrix(int**array, int amount)
{
	cout << "Enter the number: ";
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount; j++)
		{
			cin >> array[i][j];
		}
	}
}

int sumMatrix(int** array, int size)
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		if (i < size/2)
		{
			for (int j = 0; j < size / 2; j++)
			{
				sum += array[i][j];
			}
		}
		else
		{
			for (int j = size/2; j < size; j++)
			{
				sum += array[i][j];
			}
		}
	}
	return sum;
}

int main()
{
	int size, amount;
	cout << "Enter the size of array: ";
	cin >> size;
	int **array = new int*[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = new int[size];
	}
	InputMatrix(array, size);
	amount=sumMatrix(array, size);
	cout << "amount= " << amount << endl;
	system("pause");
	return 0;
}