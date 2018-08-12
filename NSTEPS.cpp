#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
            int c_x1,c_x2,c_y1,c_y2;
            if(x==0)
            {
                c_x1=0;
                c_x2=0;
            }
            else if(x==1)
            {
                c_x1=1;
                c_x2=1;
            }
            else
            {
                if(x%2==0)
                {
                c_x1=2+(x/2-1)*4;
                c_x2=4+(x/2-1)*4;
                }
                else
                {
                    c_x1=3+(x/2-1)*4;
                    c_x2=5+(x/2-1)*4;
                }
            }

        if(y==0)
        {
            c_y1=0;
            c_y2=2;
        }
        else if(y==1)
        {
            c_y1=1;
            c_y2=3;
        }
        else
        {
            if(y%2==1)
            {
                c_y1=5+(y/2-1)*4;
                c_y2=7+(y/2-1)*4;
            }
            else
            {
                c_y1=4+(y/2-1)*4;
                c_y2=6+(y/2-1)*4;
            }
        }
        if(c_x1==c_y1)
        {
            cout<<c_x1<<endl;
        }
        else if(c_x1==c_y2)
        {
            cout<<c_x1<<endl;
        }
        else if(c_x2==c_y1)
        {
            cout<<c_x2<<endl;
        }
        else if(c_x2==c_y2)
        {
            cout<<c_x2<<endl;
        }
        else
        {
            cout<<"No Number"<<endl;
        }
    }
    return 0;
}
