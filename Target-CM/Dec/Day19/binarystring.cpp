#include<bits/stdc++.h>
using namespace std;
#define ll long long


char flip(char ch)
{
    return (ch == '0') ? '1' : '0';
}
 
//  Utility method to get minimum flips when
//  alternate string starts with expected char
int getFlipWithStartingCharcter(string str,
                                char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        //  if current character is not expected,
        // increase flip count
        if (str[i] != expected)
            flipCount++;
 
        //  flip expected character each time
        expected = flip(expected);
    }
    return flipCount;
}
 
// method return minimum flip to make binary
// string alternate
int minFlipToMakeStringAlternate(string str)
{
    //  return minimum of following two
    //  1) flips when alternate string starts with 0
    //  2) flips when alternate string starts with 1
    return min(getFlipWithStartingCharcter(str, '0'),
               getFlipWithStartingCharcter(str, '1'));
}

 void solution(){
    int n; cin>>n;
    string s;
    cin>>s;

    int num = minFlipToMakeStringAlternate(s);
    string ans =(num%2==0)?"Uttu":"JJ";
    cout<<ans<<endl;
    }
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;
    while(t--) {
        solution();
    }

    return 0;
}