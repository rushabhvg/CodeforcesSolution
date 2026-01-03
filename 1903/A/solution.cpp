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

// URL: https://codeforces.com/contest/1903/submission/356267357

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (k > 1)
        {
            cout << "YES\n";
            continue;
        }

        bool possible = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                possible = false;
                break;
            }
        }
        
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
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
