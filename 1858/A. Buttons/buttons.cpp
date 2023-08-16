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
#define ll long long

int main() {
    ll t;
    std::cin>>t;
    while(t--) {
        ll a, b, c;
        std::cin>>a>>b>>c;
        ll annaExtra = (c+1)/2;
        ll katieExtra = c - annaExtra;
        // std::cout<<" "<<annaExtra<<" "<<katieExtra;
        a = a + annaExtra;
        b = b + katieExtra;
        ll diffAB = a - b;
        //          a + annaExtra - (b+ke)
        //          a + ae - (b + c-ae)
        //          a + ae - b - c + ae
        // std::cout<<" "<<a<<" "<<b<<" "<<c<<" "<<diffAB;
        // diffAB += ((c+1)/2);
        // std::cout<<" "<<((c+1)/2)<<" "<<diffAB<<std::endl;
        if(diffAB>0) {
            std::cout<<"First"<<std::endl;
        } else {
            std::cout<<"Second"<<std::endl;
        }
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
