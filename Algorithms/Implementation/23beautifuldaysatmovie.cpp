#include <bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k) {
    int count=0;
    for(int m=i;m<=j;m++)
    {
        int temp=m;
        int rnum=0;
        int rem=0;
        int diff;
        while(temp)
        {
            rem=temp%10;
            rnum=rnum*10+rem;
            temp/=10;
        }
        diff= abs(rnum-m);
        if(diff%k == 0)
            count++;
        
    }
    return count;
   return 0;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}

