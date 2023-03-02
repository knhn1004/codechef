// https://www.codechef.com/problems/HOWMANYMAX?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N, res=0;
    string s; // string of length N-1
    cin >> N >> s;
    // 0 - increasing
    // 1 - decreasing

    for (int i=0; i<N-1; i++) {
      // starts w/ 1 - add one max
      if (i==0 and s[i] == '1') res++;

      // ends w/ 0 - add one max
      else if (i==N-2 and s[i] == '0') res++;

      // count pivots in the middle - occurences of 01
      else if (s[i] == '0' and s[i+1] == '1') res++;
    }
    
    cout << res << endl;

  }

  return 0;
}
