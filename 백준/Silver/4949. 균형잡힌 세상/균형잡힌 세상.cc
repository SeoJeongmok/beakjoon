#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    while (1) {
        string a;
        getline(cin, a);
        if (a == ".") {
            break;
        }
        stack<char> s;
        int f = 0;
        for (int i = 0; i < a.length(); i++) {
            char c = a[i];
            if ((c == '(') || (c == '[')) {
                s.push(c);
            }
            else if (c == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    f = 1;
                    break;
                }
            }
            else if (c == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    f = 1;
                    break;
                }
            }
        }

        if (f == 0 && s.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    return 0;
}
