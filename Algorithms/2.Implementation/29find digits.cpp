#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int temp=n;
    int count=0;
    int digit=0;
    while(temp>0)
    {
      digit = temp%10;
        temp=temp/10;
        
        if (digit>0 && n%digit == 0 )
            count++;
    }
   return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}

