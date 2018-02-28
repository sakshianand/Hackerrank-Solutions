#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    string input;
    while(t--) {
        cin >> input;
        string a = input.substr(0,input.size()/2);
        string b = input.substr(input.size()/2);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        string c;
        if(a.size() == b.size()) {
            auto it = set_difference(a.begin(), a.end(),b.begin(), b.end(), c.begin());
            c.resize(it-c.begin());
            cout << c.size() << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}
