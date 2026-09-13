//Problem Way Too Long Words - https://codeforces.com/contest/71/problem/A
#include <cstring>
#include <iostream>
using namespace std;

int main(void)
{
    int t{};
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char array[101];
        cin >> array;
        int n = strlen(array);

        if (n <= 10)
        {
            cout << array;
        }

        else if (n > 10)
        {
            cout << array[0];
            cout << n - 2;
            cout << array[n - 1];
        }

        cout << "\n";
    }

    return 0;
}
