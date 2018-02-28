#include <bits/stdc++.h>

using namespace std;

long flippingBits(long N) {
    long ar[32]={0};
    int i=1;
    while(N)
    {
     ar[32-i]=N%2;
        N/=2;
        i++;
    }
    for(int j=0;j<32;j++)
    {
        if(ar[j]==0)
            ar[j]=1;
        else
            ar[j]=0;
    }
   unsigned int res=0;
    for(int k=31,j=0;k>=0,j<32;k--,j++)
    {
        res+=ar[k]*pow(2,j);
    }
    return res;
    
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        long N;
        cin >> N;
        long result = flippingBits(N);
        cout << result << endl;
    }
    return 0;
}

