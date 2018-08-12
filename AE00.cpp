#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;++i)
    {
        for(int j=2;j<=(int)sqrt(i);++j)
        {
            if(i%j==0)
                ++ans;
        }
    }
    cout<<ans+n;
    return 0;
}
