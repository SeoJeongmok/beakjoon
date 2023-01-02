#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
    int N;
    cin >> N;
    int cnt=0;
    int i = 666;
    while (true)
    {
        int tmp = i;
        while (tmp != 0)
        {
            if (tmp % 1000 == 666)
            {
                cnt++;
                break;
            }
            tmp /= 10;
        }
        if (N == cnt)
            break;
        i++;
    }
    cout << i << "\n";
    return 0;
}