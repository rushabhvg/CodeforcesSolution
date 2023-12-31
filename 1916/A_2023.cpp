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
    ll n, k;
    cin>>n>>k;
    ll ans = 1;
    // cout<<n<<"\t";
    for(int i=0; i<n; i++) {
        ll temp;
        cin>>temp;
        ans = ans*temp;
    }
    if(2023%ans!=0) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES\n"<<2023/ans;
        for(ll i=0; i<k-1; i++) {
            cout<<" 1";
        }
        cout<<endl;
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
