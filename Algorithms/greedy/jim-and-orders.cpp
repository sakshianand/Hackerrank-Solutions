#include <bits/stdc++.h>

using namespace std;

  struct order
    {
        int id;
        int start;
        int end;
    };
bool comp(order &o1,order &o2)
{
    return(o1.end<o2.end || o1.end==o2.end && o1.id<o2.id);
}

int main() {
    int n;
    cin >> n;
  
    vector< order> orders(n);
    int d;
    for(int orders_i = 0;orders_i < n;orders_i++){
        cin>>orders[orders_i].start;
        cin>>d;
        orders[orders_i].end=orders[orders_i].start+d;
        orders[orders_i].id=orders_i+1;
       }
    sort(orders.begin(),orders.end(),comp);
    for(int i=0;i<n;i++)
    {
        cout<<orders[i].id<<" "; 
    }
    return 0;
    }
    
    


