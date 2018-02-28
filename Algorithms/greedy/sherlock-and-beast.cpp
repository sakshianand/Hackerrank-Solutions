#include<bits/stdc++.h>
using namespace std;

void getcombs(vector<pair<int,int>> &combs,int n)
{
int num_3=0,num_5=0;
while(true)
{
num_5=n-num_3;
if(num_5<0)
break;
if(num_5%3==0)
{
combs.push_back(make_pair(num_5,num_3));
}
num_3+=5;
}
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<pair<int,int>>combs;
        getcombs(combs,n);
        if(combs.size()>0)
        {
        pair<int,int> max=*max_element(combs.begin(),combs.end());
        
        for(int i=0;i<max.first;i++)
        {
        cout<<5;
        }
        for(int i=0;i<max.second;i++)
        {
        cout<<3;
        }
        }
        else
        {
        cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}

