#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr){
    int count=0;
    int flag;
    for(int l='a';l<='z';l++)
    {
        flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i].find(l)==-1)
            {
                flag=1;
            }
        }
        if(flag==0)
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}

