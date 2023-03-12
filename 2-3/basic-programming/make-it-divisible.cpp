// https://www.codechef.com/LP2TO301/problems/MAKEDIV3
#include <bits/stdc++.h>
using namespace std;

// I decided to use, 3, 15, 105, 1005, ...

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    // divisible by 3 but not by 9
    // sum %3 == 0
    // sum %9 != 0
    int sum = 0;
    // odd number - last digit 1, 3, 5, 7, 9
    // size n

    // we want an array of size n,
    // w/ sum%3 == 0 && sum%9 !=0
    // and the last element should be one of 1, 3, 5, 7, 9

    // base case:
    //  n == 1 -> 3
    //  n ==2 -> 15
    if (n == 1) {
      cout << 3 << endl;
      continue;
    }

    //  go w/ lowest number possible,
    //  w/o leading 0, the first number should be 1
    //  let's just make our sum: 6
    cout << 1;
    sum = 1;
    n--;
    while (n--) {
      if (n == 0) { // last digit
        cout << 5;
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }

  return 0;
}
