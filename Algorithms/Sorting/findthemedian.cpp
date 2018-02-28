#include <bits/stdc++.h>

using namespace std;

int findMedian(vector <int> arr) {
    sort(arr.begin(),arr.end());
    int n= (arr.size()-1)/2;
    return arr[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = findMedian(arr);
    cout << result << endl;
    return 0;
}

