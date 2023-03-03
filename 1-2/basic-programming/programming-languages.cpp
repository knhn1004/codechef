// https://www.codechef.com/LP1TO201/problems/PROGLANG
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int A, B, A1, B1, A2, B2;
    cin >> A >> B >> A1 >> B1 >> A2 >> B2;
    if ((A==A1 && B==B1) || (A==B1 && B==A1)) {
      cout << 1 << endl;
    }  else if ((A==A2 && B==B2) || (A==B2 && B==A2)) {
      cout << 2 << endl;
    } else {
      cout << 0 << endl;
    }
    
  }

  return 0;
}
