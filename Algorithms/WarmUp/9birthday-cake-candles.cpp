#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    sort(ar.begin(),ar.end());
    int count =1;
    int max= ar[n-1];
    if(ar[n-2]==max)
        
    {
        for(int i=n-2;i>=0;i--)
    {
      if(ar[i]==max)
            count++;  
    }
    }
      return count;       
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

