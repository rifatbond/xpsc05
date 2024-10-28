#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a!=b)
    {
    int dif=abs(a-b);
    int res=(a-1)+(b-1)+dif+1;
    cout<<res<<endl;
    }
    else
    {
        cout<<a+b<<endl;
    }
    return 0;
}