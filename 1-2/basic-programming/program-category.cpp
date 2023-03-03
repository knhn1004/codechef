// https://www.codechef.com/LP1TO201/problems/PROBCAT
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (1<=x && x <100) {
      cout << "Easy" <<  endl;
    } else if (100<=x && x<200) {
      cout << "Medium" <<  endl;
    } else {
      cout << "Hard" <<  endl;
    }
  }

  return 0;
}
