#include <bits/stdc++.h>

using namespace std;

void caesarCipher(string s, int k) {
    k=k%26;
   for(int i=0;i<s.size();i++)
   {
       int c=s[i];
       if(c>='A' && c<='Z')
       {
           c=c+k;
           if(c>'Z')
           {
               c=64+(c%90);
           }
       }
       else if(c>='a' && c<='z')
       {
           c=c+k;
           if(c>'z')
           {
               c=96+(c%122);
           }
           
       }
       cout<<(char)c;
   }
    cout<<endl;
    
       
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
     caesarCipher(s, k);
   
    return 0;
}

