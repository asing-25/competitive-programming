#include <iostream>

using namespace std;

int main(void)
{
    int t{}, k{}, array[51], qualified{}, qualify{};
    cin >> t >> k;
    int used{};
    while (t--)
    {
        cin >> array[used];
        used++;
    }

    qualify = array[k - 1];

    for (int i = 0; i < used; i++)
    {
        if (array[i] >= qualify && array[i] != 0)
        {
            qualified++;
        }
    }

    if (array[0] == 0)
    {
        cout << 0;
    }
    else
    {
        cout << qualified;
    }

    return 0;
}
