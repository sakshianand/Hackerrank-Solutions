#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    int i=0,count=0,sum=0;
   sort(prices.begin(),prices.end());
    while(sum+prices[i]<=k)
    {
        sum+=prices[i];
        count++;
        i++;
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}

