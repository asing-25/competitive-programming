#include <iostream>

using namespace std;

int main(void)
{
    int t{}, input{};
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> input;

        for (int j = 1; j <= input; j++)
        {
            cout << j << " ";
        }

        cout << "\n";
    }
    return 0;
}
