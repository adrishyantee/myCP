#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll getClosest(ll, ll, ll);
 
// Returns element closest to target in arr[]
ll findClosest(ll arr[], ll n, ll target)
{
    // Corner cases
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
 
    // Doing binary search
    ll i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {
 
            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);
 
            /* Repeat for left half */
            j = mid;
        }
 
        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            // update i
            i = mid + 1;
        }
    }
 
    // Only single element left after search
    return arr[mid];
}
ll getClosest(ll val1, ll val2,
               ll target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}

int main(){
    ll n; cin>>n;
    ll arr[n];
    ll sum1=0;


    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }

    sort(arr,arr+n);

    ll m; cin>>m;

    for(ll i =0;i<m;i++)
    {
      ll sum=sum1;
      ll goldcoins=0;
      ll x,y;
      cin>>x;
      cin>>y;
      ll closest = findClosest(arr,n,x);

      if(closest<x){
      goldcoins+=x-closest;
      }
      sum-=closest;

     if(y-sum>0)
     goldcoins+=y-sum;


     
     cout<<goldcoins<<endl;
    }
    return 0;
}





    
