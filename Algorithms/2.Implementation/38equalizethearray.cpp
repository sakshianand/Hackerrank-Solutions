#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    int count,max=0;
    for(int i=0;i<arr.size();i++)
    {
        count=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]==arr[i])
                {
                count++;
                } 
        }
        if(max<count)
        {
            max=count;
        }
    }
    return arr.size()-max;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}

