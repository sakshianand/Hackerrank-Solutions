#include <bits/stdc++.h>

using namespace std;

vector <int> maximumPerimeterTriangle(vector <int> l) {
    sort(l.begin(),l.end(),greater<int>());
    vector<int>r;
    for(int i=0;i<l.size()-2;i++)
    {
        if(l[i]+l[i+1]>l[i+2] && l[i]+l[i+2]>l[i+1] && l[i+1]+l[i+2]>l[i])
        {
            r.push_back(l[i+2]);
            r.push_back(l[i+1]);
            r.push_back(l[i]);
            break;
        }
    }
    if(r.empty())
        cout<<-1;
    return r;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(int l_i = 0; l_i < n; l_i++){
       cin >> l[l_i];
    }
    vector <int> result = maximumPerimeterTriangle(l);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

