#include <bits/stdc++.h>

using namespace std;

int serviceLane(int i,int j,vector<int> width) {
    int min=10;
   for(int k=i;k<=j;k++)
   {
       if(width[k]<min)
           min=width[k];
   }
    return min;
}

int main() {
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0; width_i < n; width_i++){
       cin >> width[width_i];
    }
   for(int k=0;k<t;k++)
   {
       int i,j;
       cin>>i>>j;
       int result = serviceLane(i,j,width);
       cout<<result<<endl;
   }
    
   
   


    return 0;
}

