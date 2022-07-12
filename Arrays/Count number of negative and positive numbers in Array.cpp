# include<iostream>
using namespace std;

/* Count number of negative and positive numbers in Array

*/
int main()
{
    int A[] = { 3,5,-2,9,-4,10,-24,19,81,-7,12,13 };
    int pcount = 0;
    int ncount = 0;

    for (auto x : A)
    {
        if (x < 0)
            ncount++;
        else
            pcount++;
    }

    cout << pcount << " " << ncount;
}
