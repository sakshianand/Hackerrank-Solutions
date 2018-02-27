#include <bits/stdc++.h>
#include<string.h>
using namespace std;

string solve(int year){
    int count=215,feb;
       if(year>1918)
       {
           if(year%400 == 0 || (year%4==0 && year%100 !=0))
           {
               feb=29;
           }
           else
               feb=28;
       }
    else if(year<1918)
    {
        if(year%4 == 0)
            feb=29;
        else
            feb=28;
    }
    else
       feb=15;
    int date;
    date=256-(count+feb);
    return to_string(date)+".09."+to_string(year);
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

