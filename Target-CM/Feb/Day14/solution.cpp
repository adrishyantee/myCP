//this is a logic bassed on a b2b marketplace between two companies selling cats
// and in return getting the eggs.
//They have agreed on few terms of exchanges.
//There are 3 types of cats and 2 types of eggs.
// CATS - Persian, Bengal, Bombay
// EGGS - of hen, of duck.

// The exchanges will happen in this way

// STORE 1   - cats                   STORE 2 - eggs
// 2 PERSIAN                          12 hen eggs 10 duck eggs
// 4 BENGAL                           15 hen eggs 8 duck eggs
// 1 BOMBAY                           6 hen eggs 2 duck eggs

// exchanges cannot happen in other combinations.

#include <bits/stdc++.h>
using namespace std;
#define ll long long 


vector<ll> cats(3,5); // 0 - persian 1 - Bengal 2 - Bombay
vector<ll> eggs(2,30); // 0 - hen egg 1 - duck egg


void exchangeeggs(){

    cout<<"Which cat do you want to sell? 1-persian, 2-bengal, 3 - bombay"<<endl;

    ll cat; cin>>cat;

    cout<<"How many do you want to sell?"<<endl;

    ll henegg =0, duckegg =0;

    ll num; cin>>num;

    if(cat==1){
     henegg = num*12;
     duckegg = num*10;
     }
    else if(cat == 2){
     henegg = num*15;
     duckegg = num*8;
    }
    else if(cat == 3){
     henegg = num*6;
     duckegg = num*2;
    }
    else{
    cout<<"Wrong choice";
    return;
    }  

     if(cats[cat-1]>=num && eggs[0]>=henegg && eggs[0]>=duckegg ){
         cout<<"Transaction done! Have a good day!"<<endl;
         eggs[0]+=henegg;
         eggs[1]+=duckegg;
         cats[cat-1]-=num;
     }
     else{
         cout<<"Its not possible come back later."<<endl;
     }
}


void exchangecats(){

    cout<<"Which cat do you want to buy? 1-persian, 2-bengal, 3 - bombay"<<endl;

    ll cat; cin>>cat;

    cout<<"How many do you want to buy?"<<endl;

    ll henegg =0, duckegg =0;

    ll num; cin>>num;

    if(cat==1){
     henegg = num*12;
     duckegg = num*10;
     }
    else if(cat == 2){
     henegg = num*15;
     duckegg = num*8;
    }
    else if(cat == 3){
     henegg = num*6;
     duckegg = num*2;
    }
    else{
    cout<<"Wrong choice";
    return;
    }


  

     if(cats[cat-1]>=num && eggs[0]>=henegg && eggs[0]>=duckegg ){
         cout<<"Transaction done! Have a good day!"<<endl;
         eggs[0]-=henegg;
         eggs[1]-=duckegg;
         cats[cat-1]+=num;
     }
     else{
         cout<<"Its not possible come back later."<<endl;
     }
}

int main(){

    cout<<"WELCOME TO THE B2B MARKETPLACE: "<<endl;
    cout<<"There are 5 cats of each types and 30 eggs of each type"<<endl;
    doagain:
    cout<<"There can be two potent sellers , either for cats or eggs"<<endl;

    cout<<"Press 1 for cats 2 for eggs"<<endl;

    int ch ; cin>>ch;

    switch(ch){
        case 1:
        {
        exchangecats();
        }
        break;
        case 2:{
        exchangeeggs();
        }
        break;
        default:
        cout<<"Wrong Choice"<<endl;
    }

    cout<<"Do you want to go to the marketplace again? Press 1 or Press any key to exit"<<endl;

    int c; cin>>c;

    if(c==1){
        goto doagain;
    }
    return 0;
}