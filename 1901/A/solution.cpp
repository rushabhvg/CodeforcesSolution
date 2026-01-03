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

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxDiff = a[0];
        for (int i = 1; i < n; i++) {
            int diff = a[i] - a[i-1];
            maxDiff = (maxDiff < diff) ? diff : maxDiff; 
        }

        int tmp = 2 * (x - a[n-1]);
        maxDiff = (maxDiff < tmp) ? tmp : maxDiff;

        cout << maxDiff << "\n";
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
