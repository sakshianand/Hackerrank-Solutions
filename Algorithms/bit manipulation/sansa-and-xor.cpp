#include <bits/stdc++.h>

using namespace std;

int sansaXor(vector <int> arr) {
    int p=0;
    if(arr.size()%2==0)
        return 0;
    else
    {
        for(int i=0;i<arr.size();i+=2)
          p^=arr[i];  
        
        return p;
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        int result = sansaXor(arr);
        cout << result << endl;
    }
    return 0;
}

