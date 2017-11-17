#include <iostream>
#include <ctime>
using namespace std;

void Random(int **array, int &size)
{
	int a, b;
	cout << "Enter interval: ";
	cin >> a >> b;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = a + rand() % (b - a);
		}
	}
}

void Print(int **array, int &size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout<<array[i][j]<<"  ";
		}
		cout << endl;
	}
}

int* suchPosition (int **array, int &size)
{
	int *array1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i][j] < 0 && array1[i] < 0) array1[i] = j+1;
		}
	}
	return array1;
}

int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int **array = new int*[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = new int[size];
	}
	Random(array, size);
	Print(array, size);
	int *array1 = new int[size];
	array1 = suchPosition(array,size);
	for (int i = 0; i < size; i++)
	{
		if (array[i]>=0)
		cout<<array1[i] << "  ";
		else cout << " << "  ";
	}
	system("pause");
	return 0;

}