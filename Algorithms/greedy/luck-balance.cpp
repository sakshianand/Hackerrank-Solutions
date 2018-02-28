#include <bits/stdc++.h>

using namespace std;
bool cmp(vector<int>v1,vector<int>v2)
{
    return v1[0]>v2[0];
}
int luckBalance(int n, int k, vector < vector<int> > contests) {
    sort(contests.begin(),contests.end(),cmp);
    int i=0,luck=0;
    while( i<n)
    {
        if(contests[i][1]==0)
        {
            luck+=contests[i][0];
        }
        else if(k!=0)
        {
            k--;
            luck+=contests[i][0];
        }
        else
        {
            luck-=contests[i][0];
        }
        i++;
    }
    return luck;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector< vector<int> > contests(n,vector<int>(2));
    for(int contests_i = 0;contests_i < n;contests_i++){
       for(int contests_j = 0;contests_j < 2;contests_j++){
          cin >> contests[contests_i][contests_j];
       }
    }
    int result = luckBalance(n, k, contests);
    cout << result << endl;
    return 0;
}

