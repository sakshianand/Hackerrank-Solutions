#include <bits/stdc++.h>

using namespace std;
int bitwiseor(string a,string b)
{
    string v;
    v.resize(a.size());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1' || b[i]== '1')
          v[i]='1';
        else
            v[i]='0';
            
    }
    int c=0;
    for(int i=0;i<a.size();i++)
    {
        if(v[i]=='1')
            c++;
        
    }
    return c;
}
vector <int> acmTeam(vector <string> topic) {
    vector<int>a;
    for(int i=0;i<topic.size();i++)
    {
        for(int j=i+1;j<topic.size();j++)
        {
         int num =   bitwiseor(topic[i],topic[j]);
            a.push_back(num);
        }
            
    }
    sort(a.begin(),a.end(),greater<int>());
    int count=1,j=0;
    vector<int>result;
    for(int i=1;i<a.size();i++)
    {
        if(a[0]!=a[i])
        {
            result.push_back(a[0]);
            result.push_back(i);
            break;
        }
            
    }
    return result;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0; topic_i < n; topic_i++){
       cin >> topic[topic_i];
    }
    vector <int> result = acmTeam(topic);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

