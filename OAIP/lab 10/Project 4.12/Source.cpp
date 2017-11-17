# include <iostream>
# include <ctime>
using namespace std;

int main()
{
	int array[200], amount, k, count, amountOfNumber=0, imin=-1, imax=-1;
	do {
		cout << "Enter tne size of array: ";
		cin >> amount;
	} while (amount > 200 || amount < 1);
	cout << "How are you write array? (1 - random, 2 - hand): ";
	cin >> k;
	if (k == 1)
	{
		int a, b;
		cout << "Enter the interval: ";
		cin >> a >> b;
		srand(time(0));
		for (int i = 0; i < amount; i++)
		{
			array[i] = a + rand() % (b - a);
		}
	}
	else
	{
		for (int i = 0; i < amount; i++)
		{
			cin >> array[i];
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << array[i] << " ";
	}

	//1
	for (int i=0; i< amount;i++)
	{
		for (int j = i; j < amount; j++)
		{
			if (array[i] == array[j] && count < 2) count++;
		}
		if (count <= 1) amountOfNumber++;
		count = 0;
	}
	cout <<endl<< amountOfNumber << endl;
	//2
	for (int i = 0; i < amount; i++)
	{
		if (array[i] < 0) 
		{
			imin = i;
			break;
		}
	}
	for (int i = amount - 1; i >= 0; i--)
	{
		if (array[i] < 0)
		{
			imax = i;
			break;
		}
	}
	if (imin != -1 && imax != -1)
	{
		int sum=0;
		for (int i = imin + 1; i < imax; i++)
		{
			sum += array[i];
		}
		cout << "Sum= " << sum<<endl;
	}
	else cout << "Unreal" << endl;
	//3
	int x, amount1;
	cout << "Enter the number:";
	cin >> x;
	amount1 = amount;
	for (int i = 0; i < amount1; i++)
	{
		if (fabs(array[i]) < x)
		{
			array[i] = 0;
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = amount-1; i >=0; i--)
	{
		if (array[i] ==0 && i != amount - 1)
		{
			for (int j = i; j <amount-1; j++)
			{
				array[j] = array[j+1];
			}
			array[amount-1] = 0;
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}