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

  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int t1 = a[0];
  int t2 = a[n - 1];
  if (t1 == t2) {
    cout << "Yes\n";
    return;
  }

  int cnt1 = 0;
  int cnt2 = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] == t1) {
      cnt1++;
    } else if (a[i] == t2) {
      cnt2++;
    } else {
      cout << "No\n";
      return;
    }
  }

  if (abs(cnt1 - cnt2) <= 1) {
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
