#include <bits/stdc++.h>
using namespace std;
#define long long int;

int solve(int A, int B)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (((A >> i) & 1) != ((B >> i) & 1)) {
            count++;
        }
    }
 
    return count;
}

int main(){

    int n,m,k;
    cin>>n>>m>>k;

    int arr[m+1];

    for(int i=0;i<m+1;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<m;i++){
        if(solve(arr[i],arr[m])<=k)
        count++;
    }
    cout<<count<<endl;


    return 0;
}