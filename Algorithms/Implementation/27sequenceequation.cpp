#include <bits/stdc++.h>

using namespace std;

vector <int> permutationEquation(vector <int> p) {
    int rev[p.size()];
    vector<int>v;
    for(int i=1;i<=p.size();i++)
    {
        rev[p[i-1]]=i;
    }
    for(int i=1;i<=p.size();i++)
    {
        v.push_back(rev[rev[i]]);
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector <int> result = permutationEquation(p);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

