#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
    int length{1}, current{1};

    char input[1000001];

    cin >> input;

    int n = strlen(input);

    for (int i = 1; i < n; i++)
    {
        input[i] == input[i - 1] ? current++ : current = 1;
        length = max(length, current);
    }

    cout << length;
    return 0;
}
