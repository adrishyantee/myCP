// we can do this by dp
#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){

    int n;
     cin>>n;
     int s=0;
     vector<int> arr(n), b(n);
     for(int i=0;i<n;i++){
         cin>>arr[i];
         if(arr[i]==1){
         b[i]=-1;
         s++;
         }
         else
         b[i]=1;
     }
     cout<<(s+maxSubArraySum(b,n))<<endl;
    return 0;
}