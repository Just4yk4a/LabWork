# include <iostream>
# include <ctime>
using namespace std;

int exercise12(int array[], int  amount)
{
	int count = 0, *prt;
	prt = &array[0];
	for (int i = 1; i < amount; i++)
	{
		if (*prt > *(prt+1)) count++;
		prt++;
	}
	return count;
}


int main()
{
	int amount, a, b, exercise, *prt;
	srand(time(0));
	amount = 50 + rand() % 150;
	int *array = new int[amount];
	cout << "Enter the interval: ";
	cin >> a >> b;
	prt = &array[0];
	for (int i = 0; i < amount; i++)
	{
		*prt = a + rand() % (b - a);
		prt++;
	}
	cout << endl;
	cout << "Amount of cupl:" << exercise12(array, amount) << endl;
	system("pause");
	return 0;
}