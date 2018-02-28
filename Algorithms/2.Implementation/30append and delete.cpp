#include <bits/stdc++.h>

using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i;
    for( i=0;i<min(s.size(),t.size());i++)
    {
        if(s[i]!=t[i])
            break;
    }
    int minops=(s.size()-i)+(t.size()-i);
    int moreops=minops;
    if(moreops==k)
        return "Yes";
    else if(moreops<k)
    {
        while(moreops<k)
        {
            if(i > 0)
            {
                moreops+=2;
                i--;
            }
            else
                moreops++;
        }
        if(moreops==k)
            return "Yes";
        else
            return "No";
    }
     else
         return "No";
    
}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    string result = appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}

