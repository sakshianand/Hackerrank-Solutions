#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    int i=0;
    int jump=0;
    int n=c.size();
    while(i!=n-1)
    {
    if(c[i+2]!=1 && i+2<=n-1)
    {
        jump++;
        i=i+2;
    }
    else
    {
        jump++;
        i++;    
    }
    }
    return jump;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}

