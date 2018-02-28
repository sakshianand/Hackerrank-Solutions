#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector <string> grid) {
    for(int i=0;i<grid.size();i++)
    {
        sort(grid[i].begin(),grid[i].end());
    }
    for(int j=0;j<grid.size();j++)
    {
        for(int i=0;i<grid.size()-1;i++)
        {
            if(grid[i][j]>grid[i+1][j])
                return "NO";
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    
   
    while(t--)    
    {
        int n;
    cin >> n;
         vector<string> grid(n);
        for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    string result = gridChallenge(grid);
    cout << result << endl;}
    return 0;
}

