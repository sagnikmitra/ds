#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> vowel;
    map<string,int> consonent;
    int ttc;
    cin>>ttc;
    char ch;
    array<int, ttc> a = {};
    for(int i=0;i<ttc;i++) cin>>array[i];
    for(int i=0;i<ttc;i++){
        ch = array[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel[i]++;
        else
            consonant[i]++;
    }

}