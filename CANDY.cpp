#include<iostream>
using namespace std;
int main()
{

    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break ;
        else
        {
            int a[n];
            int sum=0;
            for(int i=0;i<n;++i)
            {
                cin>>a[i];
                sum+=a[i];
            }
            if(sum%n==0)
            {
                int ans=0;
                for(int i=0;i<n;++i)
                {
                    if(sum/n>a[i])
                    {
                        ans+=(sum/n)-a[i];
                    }
                }
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}
