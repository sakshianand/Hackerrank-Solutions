#include <bits/stdc++.h>
using namespace std;
int chk(int arr[],int s)
{
    int x,k=1;
    for(x=0;x<s;x++)
    {
        if(arr[x]%2!=0)
        {
            k=0;
            break;
        }
    }
return k;
}

int main() {
int i,n,c=0;
cin>>n;
int ar[n];
for(i=0;i<n;i++)
    cin>>ar[i];

    for(i=0;i<n-1;i++)
    {  if(ar[i]%2!=0)
        {ar[i]+=1;
        ar[i+1]+=1;
        c+=2;}
    }

       int k=chk(ar,n);
    if(k==0)
        cout<<"NO";
    if(k==1)
        cout<<c<<endl;
    
    return 0;
}
