// https://www.codechef.com/LP2TO301/problems/INDIPERM
#include <bits/stdc++.h>
using namespace std;

// in the end we just that Pi = i+1, and Pn = 1

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    // (Pi % i) != 0
    // if Pi < i then it's indivisible
    // three parts:
    //  first digit: what's left
    //  second part: ? we can have pi as (i+1), in which `<pi: i+1> % i != 0`
    //  third part: pi < i

    for (int i = 1; i <= N; i++) {
      if (i == N) {
        cout << 1 << " ";
      } else {
        cout << i + 1 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
