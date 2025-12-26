#include<bits/stdc++.h>
using namespace std;


int n;
int op(string s)
{
    int tmp=0,cnt=1;
    while(!s.empty())
    {
        tmp+=(s.back()-'0')*cnt;
        cnt*=10;
        s.erase(s.end()-1);
    }
    return tmp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int op1=s.find_first_not_of("0123456789");
        int op2=s.find_last_not_of("0123456789");
        //cout<<op1<<" "<<op2<<endl;
        int a1=op(s.substr(0,op1));
        int a2=op(s.substr(op1+1,op2-op1-1));
        int a3=op(s.substr(op2+1));
        //cout<<a1<<" "<<a2<<" "<<a3<<endl;
        if(s[op1]=='*')
        {
            cout<<a1*a2+a3<<endl;
        }
        else
        {
            cout<<a1+a2*a3<<endl;
        }
    }
    return 0;
}
