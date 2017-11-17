# include <iostream>
# include <ctime>
using namespace std;

int exercise12(int array[], int  amount)
{
	int count=0;
	for (int i = 1; i < amount; i++)
	{
		if (array[i] > array[i - 1]) count++;
	}
	return count;
}


int main()
{
	int array[100], amount,a,b, exercise;
	cout << "Enter the amount of number: ";
	cin >> amount;
	cout << "Enter the interval: ";
	cin >> a >> b;
	srand(time(0));
	for (int i = 0; i < amount; i++)
	{
		array[i] =a+ rand()%(b - a);
		cout << array[i]<<" ";
	}
	cout << endl;
	cout << "Amount of cupl:" << exercise12(array, amount) <<endl;
	system("pause");
	return 0;
}