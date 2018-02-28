#include <bits/stdc++.h>

using namespace std;

void insertionSort2(int n, vector <int> arr) {
    int value,hole;
    for(int i=1;i<arr.size();i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}

