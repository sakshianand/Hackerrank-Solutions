#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s){
    int rem;
    rem=(s+m-1)%n;
    if(rem==0)
        return n;
    else
        return rem;
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}

