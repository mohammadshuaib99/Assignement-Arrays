#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return true; // Found a duplicate
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    if (containsDuplicate(arr))
    {
        cout << "The array contains duplicate elements." << endl;
    }
    else
    {
        cout << "The array does not contain duplicate elements." << endl;
    }

    return 0;
}
