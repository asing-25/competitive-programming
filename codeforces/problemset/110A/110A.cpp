//Problem Nearly Lucky Number - https://codeforces.com/contest/110/problem/A
#include <iostream>
using namespace std;

int main()
{
    long long n;
    int count = 0;

    cin >> n;

    while(n > 0)
    {
        int digit = n % 10;

        if(digit == 4 || digit == 7)
            count++;

        n /= 10;
    }

    bool lucky = true;

    if(count == 0)
        lucky = false;

    while(count > 0)
    {
        int digit = count % 10;

        if(digit != 4 && digit != 7)
        {
            lucky = false;
            break;
        }

        count /= 10;
    }

    if(lucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
