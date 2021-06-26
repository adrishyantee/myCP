#include <bits/stdc++.h>
using namespace std;


// void printLargest(vector<int> seq, int N)
// {
//     int res[N]; // Stores result
 
//     // Insert all elements into a priority queue
//     priority_queue<int,vector<int>, greater<int>> pq;

//     for (int i = 0; i < N; i++)
//         pq.push(seq[i]);   
 
//     // Fill Up res[] from left to right
//     for (int i = 0; i < N; i++) {
//         int d = pq.top();
//         pq.pop();
//         if (d != seq[i] || i == N - 1) {
//             res[i] = d;
//         } else {
 
//             // New Element poped equals the element
//             // in original sequence. Get the next
//             // largest element
//             res[i] = pq.top();
//             pq.pop();
//             pq.push(d);
//         }
//     }
//       if (res[N - 1] == seq[N - 1]) {
//         res[N - 1] = res[N - 2];
//         res[N - 2] = seq[N - 1];
//     }
//     for (int i = 0; i < N; i++)
//         printf("%d ", res[i]);
//     printf("\n");
// }

int main(){

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

    if(n==1)
    cout<<1<<endl;

    else if(n==2)
    cout<<2<<" "<<1<<endl;

    else if(n==3)
    cout<<3<<" "<<1<<" "<<2<<endl;

    else{
        if(n%2!=0){
        cout<<3<<" "<<1<<" "<<2<<" ";
        for(int i=5;i<=n;i+=2)
        cout<<i<<" "<<i-1<<" ";
        }

        else {
        for(int i=2;i<=n;i+=2)
        cout<<i<<" "<<i-1<<" ";
        }

        cout<<endl;
    }
    }
    return 0;
}