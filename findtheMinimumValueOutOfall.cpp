#include <iostream>
using namespace std;

int findMinimum(int arr[], int size)
{
    if (size == 0)
    {
        cout << "The array is empty." << endl;
        return -1;
    }

    int minVal = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main()
{
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minValue = findMinimum(arr, size);

    if (minValue != -1)
    {
        cout << "The minimum value is: " << minValue << endl;
    }

    return 0;
}
