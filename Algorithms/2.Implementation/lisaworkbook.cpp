#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector <int> arr) {
   int count=0;
    int page=0;
    int c;
    int prob,index;
    for(int i = 1;i<=n;i++)
    {
        c=0;
        page++;
        index=0;
        prob=arr[i-1];
        while(prob)
        {
            
            index++;
            prob--;
            c++;
            if(c>k)
            {
                page++;
                c=1;
            }
            if(index==page)
                count++;
            
                
        }
        
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
    cout << result << endl;
    return 0;
}

