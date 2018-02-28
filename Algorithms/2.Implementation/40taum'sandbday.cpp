#include <bits/stdc++.h>

using namespace std;

long taumBday(long b, long w, long x, long y, long z) {
    
   vector<long>r;
    r.push_back(x*b + y*w);
    r.push_back(x*(b+w)+z*w);
    r.push_back(y*(b+w)+z*b);
    sort(r.begin(),r.end());
    return r[0];
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        long result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}

