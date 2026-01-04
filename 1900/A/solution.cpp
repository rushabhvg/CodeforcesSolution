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

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    string str;
    cin >> str;

    int cnt = 0;
    bool chk = false;
    for (int i = 0; i < str.size(); i++) {
      char c = str[i];
      if (c == '.') {
        cnt++;
        if (i > 0 && i < str.size()) {
          if (str[i - 1] == '.' && str[i + 1] == '.') {
            cout << "2" << "\n";
            chk = true;
            break;
          }
        }
      }
    }
    if (!chk) {
      cout << cnt << "\n";
    }
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
