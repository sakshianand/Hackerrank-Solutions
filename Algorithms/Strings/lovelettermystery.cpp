#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
    int size = s.size();
    int count=0;
    int i=s.size()/2-1;
    int j;
    if(size%2==0)
        j=size/2;
    else
        j=i+2;
    for(;j<size,i>=0;j++,i--)
    {
        count+=(abs(s[i]-s[j]));
    }
    return count;
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}

