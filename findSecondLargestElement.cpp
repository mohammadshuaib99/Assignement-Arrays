#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "The array doesn't have a second largest element." << endl;
        return -1;
    }

    int firstMax = arr[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < firstMax)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        cout << "There is no second largest element in the array." << endl;
        return -1; 
    }

    return secondMax;
}

int main()
{
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1)
    {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
