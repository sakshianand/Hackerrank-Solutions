#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    int max=-1;
    
    int count[n];
    for(int i=0;i<n;i++)
    {
        count[i]=0;
    }
   
    for(int i=0;i<ar.size();i++)
    {
        switch(ar[i])
        {
            case 1:count[ar[i]]++;
                break;
            case 2: count[ar[i]]++; 
                break;
            case 3:count[ar[i]]++;
                break;
            case 4: count[ar[i]]++; 
                break;
            case 5:count[ar[i]]++;
                break;
             
        }
        
            
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        if(count[i]>max)
        {
            temp=i;
            max=count[i];
        }
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

