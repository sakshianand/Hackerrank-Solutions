#include <iostream>
#include <cstring>
using namespace std;
int main() {
string s;
    int count[124]={0};
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        int c= int(s[i]);
        if(c>64&&c<91)
            c+=32;
        if(c>96&&c<123)
            (count[c])++;
    }
    
    for(int i=97;i<123;i++)
    {
        if(count[i]==0)
        {
        cout<<"not pangram";
        return 0;
        }
    }
        cout<<"pangram";
    return 0;
}
