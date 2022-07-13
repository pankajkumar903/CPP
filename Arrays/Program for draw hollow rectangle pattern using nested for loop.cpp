# include<iostream>
using namespace std;

/*program for draw hollow rectangle pattern using nested for loop

*/
int main()
{
	int row, col;
	cin >> row >> col;

	for (int i = 1; i <=row; i++)
	{
		for (int j = 1; j <=col; j++)
		{
			if (i==1 || i==row || j==1 || j==col)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
