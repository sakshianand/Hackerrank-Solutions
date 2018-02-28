#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector <int> arr) {
    
    int value = arr[n-1];
    int hole = n-1;
    while(hole>0 && arr[hole-1]>value)
    {
        arr[hole]=arr[hole-1];
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        hole=hole-1;
        cout<<endl;
    }
    arr[hole]=value;
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}

