#include <bits/stdc++.h>

using namespace std;
typedef long long ll; 
bool iskasprekar(ll n)
{ll left,right;
    ll sq=pow(n,2);
  ll temp=sq,d=0;
    while(temp)
    {
        temp/=10;
        d++;
    }
    d=(ceil)((float)d/2);
    left=sq/pow(10,d);
    right=sq-(left*pow(10,d));
    return left+right == n;
    
}
vector <ll> kaprekarNumbers(ll p, ll q) {
    vector<ll>l;
   for(ll i=p;i<=q;i++)
   {
       if(iskasprekar(i))
       {
           l.push_back(i);
       }
      
   }
    return l;
}

int main() {
    ll p;
    cin >> p;
   ll q;
    cin >> q;
    vector <ll> result = kaprekarNumbers(p, q);
    if(result.empty())
    {
        cout<<"INVALID RANGE";
    }
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

