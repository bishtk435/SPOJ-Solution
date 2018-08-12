#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int a;
        unsigned long long b;
        cin>>a>>b;
        int x=a%10;
        int res=1;
        while(b>0)
        {
            if(b%2==1)
            {
                res*=x;
                res=res%10;
            }
            x=(x*x)%10;
            b=(b/2);
        }
        cout<<res<<endl;
    }
    return 0;
}
