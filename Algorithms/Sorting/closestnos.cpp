#include <bits/stdc++.h>

using namespace std;

vector <int> closestNumbers(vector <int> arr) {
   sort(arr.begin(),arr.end());
    int min=INT_MAX;
    vector<int>r;
   vector<int>diff(arr.size());
    for(int i=1;i<arr.size();i++)
    {
      diff[i]=abs(arr[i]-arr[i-1]);
        if(min>diff[i])
            min=diff[i];
    }
    for(int i=1;i<arr.size();i++)
    {
        if(diff[i]==min)
        {
            r.push_back(arr[i-1]);
            r.push_back(arr[i]);
        }
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = closestNumbers(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

