#include <bits/stdc++.h>

using namespace std;

vector <int> climbingLeaderboard(vector <int> scores, vector <int> alice) {
    int rank=1;
    int j=0;
    for(int i=alice.size()-1;i>=0;i--)
    {
        while(alice[i]<scores[j] && j<scores.size())
        {
         if((j>=scores.size()-1) || (scores[j]!=scores[j+1]))
         {
             rank++;
         }
            j++;
        }
        alice[i]=rank;
    }
    return alice;
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    vector <int> result = climbingLeaderboard(scores, alice);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

