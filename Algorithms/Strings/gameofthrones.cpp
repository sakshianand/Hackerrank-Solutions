#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
   int count[26]={0};
    int od=0;
    for(int i =0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]%2!=0)
            od++;
    }
    if(od>1)
        return "NO";
    else
        return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}

