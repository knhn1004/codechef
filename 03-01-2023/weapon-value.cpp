// https://www.codechef.com/problems/SC31?tab=statement
#include <bits/stdc++.h>
using namespace std;

string xor_string(string &a, string &b) {
  int n = a.length();
  string ans = "";

  for (int i=0; i<n; i++) {
    if (a[i] == b[i]) {
      ans += "0";
    } else {
      ans += "1";
    }
  }
  return ans;
}

int count_ones(string s) {
  int ans = 0;
  for (char c: s) {
    if (c == '1') {
      ans++;
    }
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    string s;
    for (int i=0; i<N; i++) {
      // cin >> s[i];
      string tmp;
      cin >> tmp;
      if (s.length()) {
        s = xor_string(s, tmp);
      } else {
        s = tmp;
      }
    }
    cout << count_ones(s) << endl;
  }

  return 0;
}
