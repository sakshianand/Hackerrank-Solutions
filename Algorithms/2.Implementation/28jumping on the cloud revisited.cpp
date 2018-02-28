#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    int jump,e=100,i=0,n=c.size();
    
    
    do
    {
     jump=(i+k)%n;
     i=jump;
     e--;
     if(c[i]==1)
         e-=2;
    }while(i>0);
    return e;
        
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}

