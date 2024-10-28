#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    if(t<a)
    {
        cout<<"0"<<endl;
    }
    else
    {
        if(t%a!=0)
        {
            int rem=t/a;
            cout<<rem*b<<endl;
        }
        else
        {
            int res=t/a;
            cout<<res*b<<endl;
        }
    }
    return 0;
}