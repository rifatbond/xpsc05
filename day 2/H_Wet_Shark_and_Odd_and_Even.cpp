#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum=0;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        v.push_back(sum);
    }
    vector<long long int>v2;
    for(long long int val:v)
    {
        if(val%2==0)
        {
            v2.push_back(val);

        }
    }
    if(!v.empty())
    {
    sort(v2.begin(),v2.end(),greater<long long int>());
    cout<<v2[0]<<endl;
    }
    return 0;
}