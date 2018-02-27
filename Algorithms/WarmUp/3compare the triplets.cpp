#include <bits/stdc++.h>

using namespace std;
int main()
{
vector<int>a(3);
vector<int>b(3);
    for(int i=0;i<3;i++)
    {
        cin>>a[i]; //store alice points in this array
    }
     for(int i=0;i<3;i++)
    {
        cin>>b[i];//store bobs point in this array
    }
    int alice_pts=0,bob_pts=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            alice_pts++;
        if(a[i]<b[i])
            bob_pts++;
    }
    cout<<alice_pts<<" "<<bob_pts;
    
}
    

  


