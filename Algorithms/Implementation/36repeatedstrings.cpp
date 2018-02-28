#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
   long count=0,t;
    long size= s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            count++;
    }
    if((n%size==0))
    {
        count*=n/size;
    }
    else
       {
         count*=n/size;
           t=n%size;
           int i=0;
           while(i<t)
           {
              if(s[i]=='a')
                  count++;
               
               i++;
           }
           
       }
  return count;
}

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << endl;
    return 0;
}

