#include <bits/stdc++.h>

using namespace std;

void hackerrankInString(string s) {
      string str= "hackerrank";
     int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==str[j])
            j++;
    }
    if(j==str.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        hackerrankInString(s);
        //cout << result << endl;
    }
    return 0;
}

