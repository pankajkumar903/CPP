#include <iostream>
#include <string>
using namespace std;

float add(float x,float y)
{
	float z;
	z = x + y;

	return z;
}

int main()
{
	int a = 3.5, b = 7.9,c;
	c=add(a, b);
	cout << c << endl;

	return 0;
}
