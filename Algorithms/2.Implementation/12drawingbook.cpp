#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int a[n];
    a[0]=0;
   int min;
    for(int i=1;i<n;i++)
    {
        if(i%2!=0)
            a[i]=a[i-1]+1;
        else
            a[i]=a[i-1];
    }
    int back= abs(a[n-1]-a[p-1]);
        if(a[p-1]>back)
            min=back;
        else
            min=a[p-1];
    return min;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

