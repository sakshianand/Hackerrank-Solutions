#include <bits/stdc++.h>

using namespace std;

int main() {
    long sum=0;
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    sort(arr.begin(),arr.end());//sort the array in ascending order,sum of first 4 numbers will be smallest and sum of last 4 nos will be max.
    cout<<sum-arr[4]<<" "<<sum-arr[0]<<endl;
    return 0;
}

