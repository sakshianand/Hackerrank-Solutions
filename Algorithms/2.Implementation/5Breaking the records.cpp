#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    int max,min;
    max=score[0];
    min=score[0];
    int countmax=0;
    int countmin=0;
    vector<int>ans;
    for(int i=0;i<score.size();i++)
    {
        if(score[i]>max)
        {
            countmax++;
            max=score[i];
        }
        if(score[i]<min)
        {
            countmin++;
            min=score[i];
        }
    }
    ans.push_back(countmax);
    ans.push_back(countmin);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

