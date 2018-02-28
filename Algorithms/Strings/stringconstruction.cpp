#include <bits/stdc++.h>

using namespace std;

int stringConstruction(string s) {
    int count[26]={0};
    int c=0;
   for(int i=0;i<s.size();i++)
   {
       if(count[s[i]-'a']==0)
       {
        count[s[i]-'a']= 1;
           c++;
       }
   }
    return c;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = stringConstruction(s);
        cout << result << endl;
    }
    return 0;
}

