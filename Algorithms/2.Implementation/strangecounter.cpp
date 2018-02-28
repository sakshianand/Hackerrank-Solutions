#include <bits/stdc++.h>

using namespace std;

long strangeCode(long t) {
    long rem=3;
    while(t>rem)
    {
        t=t-rem;
        rem=rem*2;
    }
    return rem-t+1;
}

int main() {
    long t;
    cin >> t;
    long result = strangeCode(t);
    cout << result << endl;
    return 0;
}

