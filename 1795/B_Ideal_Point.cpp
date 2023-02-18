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
#include <cstdio>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        bool chk=true;
        map<int, int> arr;
        cin>>n>>k;
        for(int i=0; i<n; i++) {
            int a, b;
            cin>>a>>b;
            if(k>=a && k<=b) {
                for(int j=a; j<=b; j++) {
                    arr[j]++;
                }
            }
        }
        
        if(arr.size()==0) {
          chk=false;
        } else {
            for(auto i:arr) {
                if(i.first!=k && i.second>=arr[k]) {
                    chk=false;
                    break;
                }
            }
        }
        if(chk) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
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
