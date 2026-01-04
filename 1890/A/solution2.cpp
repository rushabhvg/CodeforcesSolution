/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  map<int, int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }
  if (a.size() > 2) {
    cout << "No\n";
    return;
  }

  if (abs(a.begin()->second - a.rbegin()->second) <= 1) {
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
  return;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }

  return 0;
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
