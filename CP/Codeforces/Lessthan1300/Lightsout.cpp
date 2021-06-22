#include <bits/stdc++.h>
using namespace std;

int flip(int x){
    if(x==0)
    return 1;
    else
    return 0;
}


int main(){

    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int in[5][5];


        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            in[i][j]=1;
        }
    }

    
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            int a=1;
            if(arr[i-1][j-1]%2!=0){
                bool odd= true;
               in[i][j]=flip(in[i][j]);
               in[i][j+1]=flip(in[i][j+1]);
               in[i][j-1]=flip(in[i][j-1]);
               in[i-1][j]=flip(in[i-1][j]);
               in[i+1][j]=flip(in[i+1][j]);
            }
        }
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout<<in[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}