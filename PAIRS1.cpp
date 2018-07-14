#include<bits/stdc++.h>
using namespace  std;
int  main()
{
    int  n,k;
    cin>>n>>k;
    int a[n];
    int ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(a[j]-a[i]==k)
                ++ans;
            else if(a[j]-a[i]>k)
                break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
