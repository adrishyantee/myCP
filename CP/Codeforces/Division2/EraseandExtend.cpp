#include "bits/stdc++.h"
using namespace std;

// func to increase the length of the string till k nd then substract
string get(string s, int k){
    while(s.size() < k){
        s = s + s;
    }
    while(s.size() > k)
        s.pop_back();
    return s;
}
int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    string pref = "";
    pref += s[0];

    string mn = get(pref, k);

    for(int i = 1;i < n;i++){
        //check if the next element is bigger or not
        if(s[i] > s[0])
        break;
        pref += s[i];
        mn = min(mn, get(pref, k));
    }
    cout << mn << "\n";
}