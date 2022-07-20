#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}