#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	char string[255];
	int length, j=0,count, number;
	do {
		string[j] = getchar();
		if (string[j] == '\n') break;
		if (string[j] == ' ') string[j] = '+';
		else if ((string[j] < 65 || (string[j] > 90 && string[j] < 97) || string[j]>122) && string[j]!=' ')
		{
			number = int(string[j]);
			string[j] = '%';
			j++;
			string[j] = number / 100 + 48;
			j++;
			string[j] = number / 10 % 10 + 48;
			j++;
			string[j] = number % 10 + 48;
		}
		j++;
	} while (string[j-1] != '\n');
	string[j] = '\0';
	cout << string << endl;
	system("pause");
	return 0;
}