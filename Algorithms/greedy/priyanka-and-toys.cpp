#include <bits/stdc++.h>

using namespace std;

int toys(vector <int> w) {
    sort(w.begin(),w.end());
    int count=0,i=1;
    int j=0;
    for(int i=0;i<w.size();i=j)
   { 
   int p =w[i];
   count++;
   j=i+1;
   while(w[j]<=p+4)
    {
    j++;
    }
    }
    
    return count;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for(int w_i = 0; w_i < n; w_i++){
       cin >> w[w_i];
    }
    int result = toys(w);
    cout << result << endl;
    return 0;
}

