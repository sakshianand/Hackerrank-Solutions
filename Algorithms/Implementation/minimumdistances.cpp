#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector <int> a) {
    int min=INT_MAX;
    int temp;
    for(int i=0;i<a.size();i++)
    {
        temp=a[i];
        for(int j=i+1;j<a.size();j++)
        {
            if(temp==a[j])
            {
                if(min>abs(j-i))
                {
                    min=abs(j-i);
                }
            }
        }
    }
    if(min==INT_MAX)
        return -1;
    else
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}

