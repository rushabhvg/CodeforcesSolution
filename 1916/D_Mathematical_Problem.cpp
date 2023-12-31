/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll std::vector<long long int>

int n=0;

void build(int &cnt, int x, int y, int z, int num) {
    for (int i = 0; i <= num / 2; ++i) {
        if (cnt == n) break;
        ++cnt;
        cout << x;
        for (int j = 1; j <= i; ++j)
            cout << 0;
        cout << y;
        for (int j = 1; j <= i; ++j)
            cout << 0;
        cout << z;
        for (int j = i * 2 + 1; j <= num; ++j)
            cout << 0;
        cout << '\n';
    }
}

void solve() {
    // int n;
    cin>>n;
    if(n==1) {
        cout<<"1"<<endl;
        return;
    } else if(n==3) {
        cout<<"169\n196\n961\n";
        return;
    }
    int cnt = 0;
    build(cnt, 1, 6, 9, n-3);
    build(cnt, 9, 6, 1, n-3);
    if (cnt != n) {
        cout << 196;
        for (int i = 4; i <= n; ++i)
            cout << 0;
        cout << '\n';
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t = 0; cin>>t;
    while (t--) {
        solve();
    }
}

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
