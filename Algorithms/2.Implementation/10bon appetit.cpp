#include <bits/stdc++.h>

using namespace std;

void bonAppetit(int n, int k, int b, vector <int> ar) {
    int sumanna=0,share;
   for(int i=0;i<ar.size();i++)
   {
       if(i!=k)
       {
           sumanna+=ar[i];
       }
   }
   share=sumanna/2;
    
    if(share==b)
        cout<< "Bon Appetit";
    else
        cout<<(b-share);
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
     bonAppetit(n, k, b, ar);
   
    return 0;
}

