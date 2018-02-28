#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
    stack<char>st;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty() || st.top()!=s[i])
            st.push(s[i]);
        else
        {
            st.push(s[i]);
            st.pop();
            count++;
        }
    }
    return count;
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}

