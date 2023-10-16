#include <iostream>
#include <vector>

using namespace std;

int findSmallestMissingPositive(vector<int>& nums) {
    int left = 0;
    int right = nums.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        
        if (nums[mid] == mid + 1) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left + 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7};

    int smallestMissing = findSmallestMissingPositive(arr);

    cout << "The smallest missing positive element is: " << smallestMissing << endl;

    return 0;
}
