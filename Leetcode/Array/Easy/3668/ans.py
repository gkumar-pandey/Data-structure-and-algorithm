
#! https://leetcode.com/problems/restore-finishing-order/?envType=problem-list-v2&envId=array

def recoverOrder(orders,friends ):
    ans = []
    for ele in orders:
        if ele in friends:
            ans.append(ele)

    return ans