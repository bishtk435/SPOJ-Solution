#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        float t;
        cin>>t;
        if(t==0.00)
            return 0;
        else
       {

            float c=0.00;
            int ans=0;
            for(int i=2;c<t;++i)
            {
                c+=1.00/i;
                ++ans;
            }
        cout<<ans<<" card(s)"<<endl;
       }
    }
}
