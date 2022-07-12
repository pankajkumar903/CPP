#include <iostream> 
using namespace std;

int main()
{
	int n,num,digit, rev=0;
	cout << "Enter number ";
	cin >> num;
	n = num;

	do 
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
		
	}
	while (num != 0);
	{
		cout << rev << endl;
	}
	if (n == rev)
	{
		cout << "The number is Palindrome";
	}
	else
	{
		cout << "The number is not Palindrome";
	}
	return 0;
}
