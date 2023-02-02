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

#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        int sum = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for(int i=0; i<n-1; i++) {
            int tempSum = sum;
            tempSum -= a[i];
            tempSum -= a[i+1];
            
            tempSum += -a[i];
            tempSum += -a[i+1];
            
            if(tempSum>ans) {
                ans = tempSum;
            }
        }
        cout << ans << endl;
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
