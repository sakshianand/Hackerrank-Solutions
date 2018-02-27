#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    int i=0,index,max=-1;
   while(word[i]!='\0')
   {
    index=(int)word[i]-97;
    if(max<h[index])
    {
        max=h[index];
    }
       i++;
   }
    int area = i*max;
    return area;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}

