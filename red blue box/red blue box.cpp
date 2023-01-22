#include <iostream>
#include <cstdlib>
using namespace std;
void  Score(string a, int length)
{

	int point = 0;
	int multipler = 1;
	int b = 20;//POINT FOR B = 20
	int r = 10;//POINT FOR R = 10
	char pre='~';
	for (int i = 0; i < length; i++)
	{
		if (a[i] == 'B')
		{
			if (a[i] == pre)
			{
				multipler = multipler + 1;
				point = point + b * multipler;
			}
			else
			{
				multipler = 1;
				point = point + b * multipler;
				pre = 'B';
			}
		}
		else if (a[i] == 'R')
		{
			if (a[i] == pre)
			{
				multipler = multipler + 1;
				point = point + r * multipler;
			}
			else
			{
				multipler = 1;
				point = point + r * multipler;
				pre = 'R';
			}
		}
	}
	cout << point;
}
void mainstring(int item)
{
	string value = "";
	srand(time(0));
	int upperLimit = 6, lowerLimit = 1;
		int length = lowerLimit + rand() % (upperLimit - lowerLimit + 1);
		for (int x = 0; x < length; x++)
		{
			char box = rand() % 2 ? 'R' : 'B';
			value += box;
		}
		cout << value << endl;
		Score(value,length);
}
int main()
{
	int items = 1;
	mainstring(items);
	return 0;
}
