#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(vector<int>arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);

    return;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    

    while(t--){
        long long n; cin>>n;
         vector<pair<long, long>> s(n);
        for(long long i=0;i<n;i++){
            cin>>s[i].first;
            s[i].second = i;
        }
        sort(s.begin(), s.end());
        // int flag=0;
        // for(int i=0;i<n;i++)
        // {
        //     if((i-s[i].second)%2!=0){
        //     flag=1;
        //     break;
        //     }
        // }
        // if(flag==1)
        // cout<<"NO"<<endl;
        // else
        // cout<<"YES"<<endl;
    }
    return 0;
}