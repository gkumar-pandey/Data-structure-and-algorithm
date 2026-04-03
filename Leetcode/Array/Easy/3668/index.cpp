#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> order = {3, 2, 1, 4};
    vector<int> friends = {2, 3};

    unordered_set<int> s(friends.begin(), friends.end());
    vector<int> ans;

    for (int i = 0; i < order.size(); i++)
    {
        if (s.find(order[i]) != s.end())
        {
            ans.push_back(order[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}