#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol338;
using namespace std;

/*takeaways
  - a ^ a = 0, so if a appears exactly twice
    it will be canceled out
  - [9,6,4,2,3,5,7,0,1]
  - we are builind this big expression
    (0) ^
    (1 ^ 9) ^
    (2 ^ 6) ^
    (3 ^ 4) ^
    (4 ^ 2) ^
    (5 ^ 3) ^
    (6 ^ 5) ^
    (7 ^ 7) ^
    (8 ^ 0) ^
    (9 ^ 1)
  - everyone will be canceled out expect 8 as it
    only appears once
*/

int Solution::missingNumber(vector<int> &nums)
{
  int n = nums.size();

  int x = 0;
  /* the value of x doesn't matter during
     the process. It's just a placeholder
     to store the partial result
     while we are building the expression
     - at the very end, it will store the
       one that appears only once, which
       is what really matters
  */
  for (int i = 1; i <= n; i++)
    x = x ^ i ^ nums[i - 1];
  return x;
}