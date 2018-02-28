#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    int cnt=0;
    for(int i=1;i<s.size()-1;i+=3)
    {
        if(s[i]!='O' )
            cnt++;
        if(s[i-1]!='S')
            cnt++;
        if(s[i+1]!='S')
            cnt++;
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}

