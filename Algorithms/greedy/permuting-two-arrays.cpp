#include <bits/stdc++.h>

using namespace std;

string twoArrays(int k, vector <int> A, vector <int> B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    int i=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]+B[i]<k)
        {
            return "NO";
            break;
        }
    }
    return "YES";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> A(n);
        for(int A_i = 0; A_i < n; A_i++){
           cin >> A[A_i];
        }
        vector<int> B(n);
        for(int B_i = 0; B_i < n; B_i++){
           cin >> B[B_i];
        }
        string result = twoArrays(k, A, B);
        cout << result << endl;
    }
    return 0;
}

