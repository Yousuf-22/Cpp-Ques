#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> minn;

    for (int i = 0; i < nums.size(); i++)
    {
        minn.push(nums[i]);

        if (minn.size() > k)
        {
            minn.pop();
        }
    }
    return minn.top();
}
int main()
{
    vector<int> arr = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    cout << findKthLargest(arr, 4);
    return 0;
}