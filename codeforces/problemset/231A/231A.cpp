#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    int array[1001][4];
    int sol{}, totalsol{};

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];

            if (array[i][j] == 1)
            {
                sol++;
            }
        }

        if (sol >= 2)
        {
            totalsol++;
        }

        sol = 0;
    }

    cout << totalsol;

    return 0;
}
