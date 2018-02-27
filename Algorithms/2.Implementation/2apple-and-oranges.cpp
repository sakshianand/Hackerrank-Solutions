#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
     int larry=0;int rob=0;
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
   // int larry=0;
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
        if(apple[apple_i]>0 && a+apple[apple_i]>=s && a+apple[apple_i]<=t)
                { 
                larry++;  
            }
    }
    vector<int> orange(n);
    //int rob=0;
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
                 if(orange[orange_i]<0 && b-abs(orange[orange_i])>=s &&  b-abs(orange[orange_i])<=t)
                {
                rob++;  
            }
   
    }
    
   
   
    cout<<larry<<endl<<rob;
    return 0;
}

