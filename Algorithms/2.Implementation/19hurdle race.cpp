#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    int max=-1;
   for(int i=0;i<height.size();i++)
   {
       if(height[i]>max)
       {
           max=height[i];
       }
   }
    if(max>k)
        return (max-k);
    else
        return 0;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}

