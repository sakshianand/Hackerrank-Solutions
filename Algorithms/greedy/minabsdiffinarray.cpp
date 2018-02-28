#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {
    sort(arr.begin(),arr.end());
    int diff,min=INT_MAX;
    for(int i=1;i<arr.size();i++)
    {
        diff=abs(arr[i]-arr[i-1]);
        if(min>diff)
            min=diff;
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}

