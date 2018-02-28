#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s){
    int i=0;
    int j=s.size()-1;
    int ans=-1;
    while(i<j && s[i]==s[j])
    {
        i++;
        j--;
    }
    if(i<j)
    {
        if(s[i+1]==s[j] && s[i+2]==s[j-1]) return i;
        else if(s[i]==s[j-1] && s[i+1]==s[j-2])return j;
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}

