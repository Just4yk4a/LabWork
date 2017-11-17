#include <iostream>
using namespace std;


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
	cout << "Enter the number: "<<endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> array[i][j];
		}
	}
	int k, m, min;
	cout << "Enter the i and j: ";
	cin >> k >> m;
	min = array[0][size - 1];
	for (int i = 0; i <= k; i++)
	{
		for (int j = m; j < size; j++)
		{
			if (array[i][j] < min) min = array[i][j];
		}
	}
	int **array1 = new int*[size];
	for (int i = 0; i < size; i++)
	{
		array1[i] = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array1[i][j]=min;
			cout << array1[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}