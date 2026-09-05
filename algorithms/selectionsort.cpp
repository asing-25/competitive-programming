#include <iostream>

int main()
{
  int array[] = {47, 83, 15, 62, 29};
  int n = 5;

  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) // it will find the smallest number in the array and
    {                               // set its index to the minimum index
      if (array[j] < array[minIndex])
        minIndex = j;
    }

    // swap the positions of elements
    int temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
  }

  for (int i = 0; i < n; i++) //print the array
    std::cout << array[i] << " ";

  return 0;
}
