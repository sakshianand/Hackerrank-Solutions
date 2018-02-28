#include <bits/stdc++.h>

using namespace std;

vector <int> &missingNumbers(vector <int> &arr, vector <int> &brr) {
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    vector<int> *r = new vector<int>(1000010);
    auto it=set_difference(brr.begin(),brr.end(),arr.begin(),arr.end(),(*r).begin());
    it = unique((*r).begin(),it);
    r->resize(distance((*r).begin(),it));
    return *r;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int m;
    cin >> m;
    vector<int> brr(m);
    for(int brr_i = 0; brr_i < m; brr_i++){
       cin >> brr[brr_i];
    }
    vector <int> result = missingNumbers(arr, brr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<<" ";
    }
    cout << endl;


    return 0;
}

