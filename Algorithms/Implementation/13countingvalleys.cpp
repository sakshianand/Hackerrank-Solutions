#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    int count=0;
    int lvl=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='U')
           lvl++;
       if(s[i]=='D')
           lvl--;
       if(lvl == 0 && s[i]=='U')
           count++;
       
   }
    return count;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}

