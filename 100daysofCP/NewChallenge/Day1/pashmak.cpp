#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){


int t;
	int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        int s = abs(y1-y2);
        int x3 = x1+s, x4 = x1+s;
        int y3 = y1, y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(y1 == y2){
        int s = abs(x1-x2);
        int x3 = x1, x4 = x2;
        int y3 = y1+s, y4 = y1+s;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        int x3 = x2, x4 = x1;
        int y3 = y1, y4 =y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else
    cout<<-1;
    return 0;
}