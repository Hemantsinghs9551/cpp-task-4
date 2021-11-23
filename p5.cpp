#include <iostream>
using namespace std;
bool prime(int n);

int main()
{
    int n, i;
    bool flag = false;
    cout << "enter a positive integer:\n"
         << endl;

    cin >> n;
    for (i = 2; i <= n / 2; ++i)
    {
        if (prime(i))

        {
            if (prime(n - i))
            {
                cout << n << " = " << i << " + " << n - i << endl;

                flag = true;
            }
        }
    }
    if (!flag)

        cout << n << "can't be expressed as sum of two prime numbers." << endl;
    return 0;
}
//check for prime number
bool prime(int n)

{
    int i;
    bool Prime = true;
    // 0 and 1 are not a prime number.
    if (n == 0 || n == 1)
    {
        Prime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                Prime = false;
                break;
            }
        }
    }
    return Prime;
}
