#include <iostream>
#include <string>
using namespace std;

void createRows(char *c)
{
	for (int i = 0; i < 3; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
}

int main()
{
	int number;
	// rows:
	char columns[3] = { 'A', 'B', 'C' };
	char a[3] = { '_', '_', '_' };
	char b[3] = { '_', '_', '_' };
	char c[3] = { '_', '_', '_' };

	createRows(columns);
	createRows(a);
	createRows(b);
	createRows(c);

	cout << "Enter number to exit: ";
	cin >> number;

	return 0;
}