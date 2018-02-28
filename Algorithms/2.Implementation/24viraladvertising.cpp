#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    int like=2;
    int i=2;
    int temp,count=2;
    while(i<=n)
    {
        
        temp=like*3/2;
     count=count+temp;
        like=temp;
        i++;
    }
    return count;
    
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}

