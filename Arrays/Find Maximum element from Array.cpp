# include<iostream>
using namespace std;

/* Find Maximum element from Array

*/
int main()
{
        int A[] = { 4,6,27,15,31,22,30,29,8,16 };
        int max = A[0];

        for (auto x : A)
        {
            if (x > max)
                max = x;
        }

        cout << max;
 }
