#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int sum=(a+c)-1;
  int res=(sum/c)*c;
  if(res<=b)
  {
    cout<<res<<endl;
  }
  else
  {
    cout<<"-1"<<endl;
  }
    
}