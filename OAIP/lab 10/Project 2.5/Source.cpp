# include <iostream>
# include <ctime>
using namespace std;



int main()
{
	int array[200], a, b, sum;
	srand(time(0));
	for (int i = 0; i < 200; i++)
	{
		array[i] = -50 + rand() % 100;
	}
	for (int i = 0; i < 200; i++)
	{
		sum = 0;
		for (int j = i; j < 200; j++)
		{
			sum += array[j];
			if (sum == 0)
			{
				for (int k = i; k <= j; k++)
				{
					cout << array[k] << "  ";
				}
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}