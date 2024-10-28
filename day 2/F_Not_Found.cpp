#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s=="abcdefghijklmnopqrstuvwxyz")
    {
        cout<<"None"<<endl;
    }
    else
    {
        int found;
        vector<char> c;
        for(char i='z';i>='a';i--)
        {
            found=s.find(i);
            if(found==-1)
            {
                c.push_back(i);
            }
            
        }
        if (!c.empty()) {
            sort(c.begin(), c.end());
            cout << c[0] << endl;
        } else {
            cout << "None" << endl;
        }

    }
    
    
    
    return 0;
}