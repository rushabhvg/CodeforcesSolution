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

void solve() {
    int n;
    cin>>n;
    vll arr(n, 0);
    ll sum = 0, cnt = 0;
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
        sum += arr[i];
        cnt += (arr[i] % 2 == 1);
        ll ans = sum-cnt/3;
        if (i && cnt%3==1) {
            ans--;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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
