#include <bits/stdc++.h>

using namespace std;

int runningTime(vector <int> arr) {
    int hole,value,shift=0;
    for(int i=1;i<arr.size();i++)
    {
       hole=i;
       value=arr[i];
       while(hole>0 && arr[hole-1]>value)
       {
           shift++;
           arr[hole]=arr[hole-1];
           hole=hole-1;
       }
        arr[hole]=value;
    }
    return shift;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = runningTime(arr);
    cout << result << endl;
    return 0;
}

