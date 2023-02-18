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
        bool chk = true;
        int cnt=0;
        int x, y;
        cin>>x>>y;
        string str1, str2;
        cin>>str1>>str2;
        for(int i=y-1; i>=0; i--) {
            // char c = str2[i];
            // cout<<"C: "<<c;
            string s = string(1, str2[i]);
            str1.append(s);
            // cout<<"\tStr1: "<<str1<<endl;
        }
        for(int i=0; i<(x+y)-1; i++) {
            if(str1[i]==str1[i+1]) {
                cnt++;
                // cout<<endl<<str1[i]<<" "<<i<<" "<<cnt<<endl;
            }
            if(cnt>=2) {
                chk=false;
                break;
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
