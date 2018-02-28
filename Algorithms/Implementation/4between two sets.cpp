/*1. find the LCM of all the integers of array A.
2. find the GCD of all the integers of array B.
3. Count the number of multiples of LCM that evenly divides the GCD. */
#include <bits/stdc++.h>


using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    int l=a[0];
    long count=0;
   
    int g=b[0];
    for(int i = 1;i<b.size();i++)
   {
       g=__gcd(g,b[i]) ; //__gcd(a,b) is a predifined method used to calculate gcd of two nos. 
   }
    
    for(int i = 1;i<a.size();i++)
   {
     l=l*a[i]/__gcd(l,a[i]);   //lcm*gcd=prod of 2 nos.
     
   }
    
    for(int i=1;i<=g;i++)
    {
        if((l*i)==0)
            continue;
        if(g%(l*i)==0)
            count++;
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

