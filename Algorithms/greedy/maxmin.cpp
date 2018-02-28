#include <bits/stdc++.h>

using namespace std;

int angryChildren(int k, vector <int> arr) {
    int un=INT_MAX;
    int temp;
    sort(arr.begin(),arr.end());
    for(int i=0;i<=arr.size()-k;i++)
    {
      temp=arr[i+k-1]-arr[i];
        if(temp<un)
            un=temp;
    }
    return un;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = angryChildren(k, arr);
    cout << result << endl;
    return 0;
}

