# include<iostream>
using namespace std;

/*program for binary search of array element

*/
int main()
{
        int A[] = { 8,4,12,37,36,25,-2,10,15,25 };
        int min = A[0];

        for (auto x : A)
        {
            if (x < min)
                min = x;
        }

        cout << min;
 }
