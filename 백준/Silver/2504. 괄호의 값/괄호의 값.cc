#include <iostream>
#include <stack>
using namespace std;
int main() {
    string a;
    cin >> a;
    stack<char>s;
    int sum = 0;
    int temp = 1;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '(') {
            temp *= 2;
            s.push('(');
        }
        else if(a[i] == '[') {
            temp *= 3;
            s.push('[');
        }
        else if(a[i] == ')') {
            if (s.empty() || s.top() != '(') {
                sum = 0;
                break;
            }
            if (a[i - 1] == '(') {
                sum += temp;
                temp /= 2;
                s.pop();
            }
            else{
                temp /= 2;
                s.pop();
            }
        }
        else if(a[i] == ']') {
            if (s.empty() || s.top() != '[') {
                sum = 0;
                break;
            }
            if (a[i - 1] == '[') {
                sum += temp;
                temp /= 3;
                s.pop();
            }
            else{
                temp /= 3;
                s.pop();
            }
        }
    }
    if (!s.empty()) {
        sum = 0;
    }
    cout << sum << "\n";
    return 0;
}