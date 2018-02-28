#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    for(int i=1;i<s.size();i++)
    {
        if(abs(s[i]-s[i-1])!=abs(s[s.size()-i-1]-s[s.size()-i]))
            return "Not Funny";
    }
    return "Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}

