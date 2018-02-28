#include <bits/stdc++.h>

using namespace std;

int flatlandSpaceStations(int n, vector <int> c) {
    vector<int>dis;
    
    int mindis;
    if(n==c.size())
        return 0;
    else
        for(int i=0;i<n;i++)
        {
            int min= INT_MAX;
            for(int j=0;j<c.size();j++)
            {
                mindis=abs(c[j]-i);
                if(min>mindis)
                    min=mindis;
            }
            dis.push_back(min);
        }
    sort(dis.begin(),dis.end(),greater<int>());
    return dis[0];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    int result = flatlandSpaceStations(n, c);
    cout << result << endl;
    return 0;
}

