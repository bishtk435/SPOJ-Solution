#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        {
            string s;
            cin>>s;
            int l=s.length()-1;
            int a1=2*n-1;
            int a2=1;
            for(int i=0;i<n;++i)
            {
                int j=i;
                int a=0;
                while(j<=l)
                {
                    cout<<s[j];
                    if(a%2==0)
                        j+=a1;
                    else
                        j+=a2;
                    ++a;
                }
                a1=a1-2;
                a2=a2+2;
            }
        }
        cout<<endl;
    }
    return 0;
}
