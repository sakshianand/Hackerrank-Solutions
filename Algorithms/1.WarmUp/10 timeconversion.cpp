#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
 int hh = (s[0]-'0')*10+(s[1]-'0');//This is used to convert char to int.
 int mm =(s[3]-'0')*10+(s[4]-'0');
 int ss = (s[6]-'0')*10+(s[7]-'0');
    if(hh<12 && s[8]=='P')
    {
       hh=hh+12; 
    }
    if(hh==12 && s[8]=='A')
    {
        hh=0;
    }
    
    printf("%02d:%02d:%02d", hh, mm, ss) ;//hh,mm,yy will be printed in this format 00:00:00
    return 0;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    //cout << result << endl;
    return 0;
}

