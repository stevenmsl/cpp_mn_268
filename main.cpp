#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol338;

/*
Input: [3,0,1]
Output: 2
*/
tuple<vector<int>, int>
testFixture1()
{
  return make_tuple(vector<int>{3, 0, 1}, 2);
}

/*
Input: [9,6,4,2,3,5,7,0,1]
Output: 8
*/
tuple<vector<int>, int>
testFixture2()
{
  return make_tuple(vector<int>{9, 6, 4, 2, 3, 5, 7, 0, 1}, 8);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.missingNumber(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.missingNumber(get<0>(f)) << endl;
}

main()
{
  // test1();
  test2();

  return 0;
}