#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int L, r = 1, m = 1234567891;
  cin>>L;
  string s;
  cin>>s;
  long long sum = 0;
  for(int i=0;i<L;i++){
    char c =s[i] - 96;
    sum = (sum + c*r)%m;
    r = r*31%m;
  }
  cout<<sum;
}