#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int numOperations = sum % k;
    return numOperations;
}

int main()
{
    vector<int> nums = {2, 3};
    int k = 6;
    cout << minOperations(nums, k) << endl;
    return 0;
}