#include <iostream>
using namespace std;


int Min(int x, int y)
{
    return((x < y) ? x : y);
}
int Min(int x, int y, int z)
{
    return std::min(std::min(x, y), z);
    //return x < y ? (x < z ? x : z) : (y < z ? y : z);
}
float min(float x, float y)
{
    return((x < y) ? x : y);
}


void main()
{
    cout << Min(10, 5);
    cout << Min(12, 7, 9);
    cout << Min(18.0f, 9.0f);
}
