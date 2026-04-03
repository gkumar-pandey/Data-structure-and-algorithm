// https://leetcode.com/problems/restore-finishing-order/?envType=problem-list-v2&envId=array

/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function (order, friends) {
  let ans = [];

  order.forEach((ele) => {
    if (friends.includes(ele)) {
      ans.push(ele);
    }
  });

  return ans;
};

let order = [3, 1, 2, 5, 4];
let friends = [1, 3, 4];
console.log(recoverOrder(order, friends));
