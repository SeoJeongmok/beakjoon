#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  vector<int> a;
  for(int i=0;i<3;i++){
    int num;
    cin>>num;
    a.push_back(num);
  }
  sort(a.begin(),a.end());
  cout<<a[1];
  return 0;
}
