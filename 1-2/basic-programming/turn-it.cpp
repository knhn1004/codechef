// https://www.codechef.com/LP1TO201/problems/NFS
#include <bits/stdc++.h>
using namespace std;

double speed(double U, double A, double S) {
  return sqrt(U*U - 2*A*S);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    double U, V, A, S;
    cin >> U >> V >> A >> S;
    if (speed(U, A, S) > V) {
      cout << "No" <<  endl;
    } else {
      cout << "Yes" <<  endl;
    }
  }
  

  return 0;
}
