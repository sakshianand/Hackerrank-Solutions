#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    sort(ar.begin(),ar.end());
    stack<int>s;
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(!s.empty() && s.top()==ar[i])
        {
            count++;
            s.pop();
        }
        else
        {
            s.push(ar[i]);
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
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

