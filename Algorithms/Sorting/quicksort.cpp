#include <bits/stdc++.h>

using namespace std;

void quickSort(vector <int> arr) {
    vector<int>left,equal,right;
    int pivot=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(pivot<arr[i])
            right.push_back(arr[i]);
        else if (pivot>arr[i])
            left.push_back(arr[i]);
        else
            equal.push_back(arr[i]);
    }
    for(int i=0;i<left.size();i++)
        cout<<left[i] <<" ";
    for(int i=0;i<equal.size();i++)
        cout<<equal[i]<<" ";
    for(int i=0;i<right.size();i++)
        cout<<right[i]<<" ";
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
     quickSort(arr);
    
    cout << endl;


    return 0;
}

