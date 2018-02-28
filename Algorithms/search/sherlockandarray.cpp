#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    bool flag;
    vector<int>pre;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];       
        pre.push_back(sum);
    }
    for(int i=1;i<a.size();i++)
    {
        if(pre[i-1]==pre[a.size()-1]-pre[i])
        { 
        flag=true;
        break;
    }
    else
        flag=false;
    }
    if(flag==true || a.size()==1)
        return "YES";
    else
        return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}

