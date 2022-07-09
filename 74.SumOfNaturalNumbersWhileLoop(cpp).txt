# include<iostream>
using namespace std;
    
/*program for sum of natural numbers using while loops


*/
int main()
{
	int n,i=1,sum=0;
	cout<<"enter the number";
	cin>>n;
	while(i<n)
	{
	     sum=sum+i;
	     i++;
	}
	cout<<"sum of natural no is"<<sum<<endl;
	return 0;
}
