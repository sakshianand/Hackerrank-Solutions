#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    for(int i=0;i<s1.size();i++)
    {
        char x=s1[i];
        if(s2.find(x)!=-1)
            return "YES";
    }
    return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}

