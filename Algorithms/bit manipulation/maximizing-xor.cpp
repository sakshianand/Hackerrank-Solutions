#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
    int p = l^r;
    int c=0;
    while(p)
    {
        c++;
        p>>=1;
    }
    return pow(2,c)-1;
}

int main() {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int result = maximizingXor(l, r);
    cout << result << endl;
    return 0;
}

