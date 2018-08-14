#include<bits/stdc++.h>
#define max_size 401
using namespace std;

class Stack
{

    public:
        char a[max_size];
        int top;
        Stack()
        {
            top=-1;
        }
        bool isEmpty()
        {
            return (top==-1);
        }
        void push(char x)
        {
            a[++top]=x;
        }
        void pop()
        {
            --top;
            if(a[top+1]!='(')
                cout<<a[top+1];
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char exp[400];
        cin>>exp;
        int l=strlen(exp);
        Stack ob;
        for(int i=0;i<l;++i)
        {
            if(exp[i]>=97&&exp[i]<=122)
                cout<<exp[i];
            else if(ob.top==-1||exp[i]=='('||ob.a[ob.top]=='(')
                ob.push(exp[i]);
            else if(exp[i]==')')
            {
                while(ob.a[ob.top]!='(')
                {
                    ob.pop();
                }
                ob.pop();
            }
            else
            {
                switch(exp[i])
                {
                    case '^':
                            if(ob.a[ob.top]=='^')
                            {
                                ob.pop();
                                ob.push(exp[i]);
                            }
                            else
                                ob.push(exp[i]);
                            break;
                    case '/':
                    case '*':
                            if(ob.a[ob.top]=='^'||ob.a[ob.top]=='/'||ob.a[ob.top]=='*')
                            {
                                ob.pop();
                                ob.push(exp[i]);
                            }
                            else
                                ob.push(exp[i]);
                            break;
                    case '+':
                    case '-':
                            ob.pop();
                            ob.push(exp[i]);
                            break;
                }
            }
        }
        while(ob.top!=-1)
        {
            ob.pop();
        }
        cout<<endl;
    }
    return 0;
}
