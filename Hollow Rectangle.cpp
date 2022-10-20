#include<iostream>
using namespace std;
int main()
{
	int rows, columns;
	cout << "Enter the number Of Rows:" << endl;
	cin >> rows;
	cout << "Enter the number Of Columns:" << endl;
	cin >> columns;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <=columns; j++)
		{
			if (i == 1 || i == rows || j == 1 || j == columns)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}