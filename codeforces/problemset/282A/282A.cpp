#include <iostream>

using namespace std;

int main(void)
{
    int t{}, result{};
    char array[4];
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> array;

        if (array[0] == '+' || array[1] == '+')
        {
            result++;
        }
        else if (array[0] == '-' || array[1] == '-')
        {
            result--;
        }
    }

    cout << result;

    return 0;
}
