#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
int result = 1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            result+=1;
        else
            result*=2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}

