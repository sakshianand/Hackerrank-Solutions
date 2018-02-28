#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,b[9],ans=INT_MAX,count=0;
    int a[][9]={{8,1,6,3,5,7,4,9,2}, {4,3,8,9,5,1,2,7,6}, {2,9,4,7,5,3,6,1,8},{6,7,2,1,5,9,8,3,4},{6,1,8,7,5,3,2,9,4},{8,3,4,1,5,9,6,7,2},{4,9,2,3,5,7,8,1,6},{2,7,6,9,5,1,4,3,8}};
    for(i=0;i9;i++)
        cinb[i];
    for(i=0;i8;i++){
        for(j=0;j9;j++){
            count+=abs(a[i][j]-b[j]);
        }
        if(countans)
            ans=count;
        count=0;
    }
    coutans;
    return 0;
}
