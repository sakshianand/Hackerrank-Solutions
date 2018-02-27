//We must calculate the frequency of positive numbrs, negative numbers and zeroes in the array, then divide each frequency by the size of the array ().
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float p=0,ne=0,z=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            p++;
        else if(arr[i]<0)
            ne++;
        else
            z++;
        
    }
    cout<<p/n<<endl<<ne/n<<endl<<z/n<<endl;
    return 0;
}

