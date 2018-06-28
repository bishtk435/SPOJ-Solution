#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        unsigned long a,b;
        cin>>a>>b;
        unsigned long ra=0,rb=0;
        int c1=0,c2=0,c3=0;

        for(int i=0;a!=0;++i)
        {
            if(c1==0)
            {
                ra+=(a%10);
                ++c1;
            }
            else
            ra=(ra*10)+(a%10);
            a/=10;
        }
        for(int i=0;b!=0;++i)
        {
            if(c2==0)
            {
                rb+=(b%10);
                ++c2;
            }
            else
            rb=(rb*10)+(b%10);
            b/=10;
        }
        unsigned long r_sum=ra+rb;
        unsigned long  ans=0;
        for(int i=0;r_sum!=0;++i)
        {
            if(c3==0)
            {
                ans+=(r_sum%10);
                ++c3;
            }
            else
            ans=(ans*10)+(r_sum%10);
            r_sum/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
