#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> minOperations(string boxes)
{
    int n = boxes.size();

    // Arrays to store cumulative costs from left and right
    vector<int> leftCost(n, 0);
    vector<int> rightCost(n, 0);

    // Calculate cumulative cost from left to right
    // leftCost[i] = total moves needed to move all balls from positions 0 to i-1 to position i
    int ballsOnLeft = 0;
    for (int i = 1; i < n; ++i)
    {
        // Add a ball if there was one at the previous position
        if (boxes[i - 1] == '1')
        {
            ballsOnLeft++;
        }
        // Each ball on the left needs one additional move to reach current position
        leftCost[i] = leftCost[i - 1] + ballsOnLeft;
    }

    // Calculate cumulative cost from right to left
    // rightCost[i] = total moves needed to move all balls from positions i+1 to n-1 to position i
    int ballsOnRight = 0;
    for (int i = n - 2; i >= 0; --i)
    {
        // Add a ball if there was one at the next position
        if (boxes[i + 1] == '1')
        {
            ballsOnRight++;
        }
        // Each ball on the right needs one additional move to reach current position
        rightCost[i] = rightCost[i + 1] + ballsOnRight;
    }

    // Combine left and right costs to get total operations for each position
    vector<int> result(n);
    for (int i = 0; i < n; ++i)
    {
        result[i] = leftCost[i] + rightCost[i];
    }

    return result;
}