#include <bits/stdc++.h>

using namespace std;

long marcsCakewalk(vector <int> calorie) {
    sort(calorie.begin(),calorie.end(),greater<int>());
    long miles=0;
    for(int i=0;i<calorie.size();i++)
    {
        miles=miles+calorie[i]*pow(2,i);
    }
    return miles;
}

int main() {
    int n;
    cin >> n;
    vector<int> calorie(n);
    for(int calorie_i = 0; calorie_i < n; calorie_i++){
       cin >> calorie[calorie_i];
    }
    long result = marcsCakewalk(calorie);
    cout << result << endl;
    return 0;
}

