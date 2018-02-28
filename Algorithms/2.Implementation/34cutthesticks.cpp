#include <bits/stdc++.h>

using namespace std;

vector <int> cutTheSticks(vector <int> arr) {
    vector<int>result;
    result.push_back(arr.size());
    sort(arr.begin(),arr.end(),greater<int>());
        while(!arr.empty())
        {
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=arr[i]-arr[arr.size()-1];
    }
    while(arr.back()==0 && !arr.empty())
    {
        arr.pop_back();
    }
            if(arr.size()!=0)
    result.push_back(arr.size());
        }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

