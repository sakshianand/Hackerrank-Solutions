#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector <int> a) {
    sort(a.begin(),a.end());
    int max=0;
   for(int i=0;i<a.size();i++)
   {
       int count=0;
       for(int j=0;j<=i;j++)
       {
           if(abs(a[j]-a[i])<=1)
           {
               count++;
           }
           if(count>max)
               max=count;
       }
   }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}

