#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
   int wrappers = n/c;
    int total=wrappers;
    while(m<=wrappers)
    {
        total+=wrappers/m;
        wrappers=wrappers/m+wrappers%m;
    }
    return total;
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        cout << result << endl;
    }
    return 0;
}

