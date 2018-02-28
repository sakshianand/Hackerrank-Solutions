#include<bits/stdc++.h>
using namespace std;


int main() {
    int cnt=0;
    string s;
    cin>>s;
    stack<char>result;
    for(int i=0;i<s.size();i++)
    {
        if(result.empty() || result.top()!=s[i])
        {
            result.push(s[i]);
        }
        else
        {
            cnt++;
            result.pop();
        }
    }
    stack<char>r2;
    if(result.empty())
    {
        cout<<"Empty String";
    }
    else
    {
        while(!result.empty())
    {
        r2.push(result.top());
        result.pop();
    }
    while(!r2.empty())
    {
         cout<<r2.top();
        r2.pop();
    }
}    
    return 0;
}

