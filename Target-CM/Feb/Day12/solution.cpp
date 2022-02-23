#include <bits/stdc++.h>
using namespace std;
#define ll long long 

map<string, set<string>> shapes;
map<string, set<string>> sizes;
map<string, set<string>> colours;


vector<string> clothes;

vector<string> addfiltershape(string ch, vector<string> &cloth){
    vector<string> temp;
    set<string> shape = shapes[ch];
   for(ll i=0;i<cloth.size();i++){
       if(shape.find(cloth[i]) != shape.end()){
           temp.push_back(cloth[i]);
       }
   }
   return temp; 
}

vector<string> addfiltersize(string ch, vector<string> &cloth){
    vector<string> temp;
    set<string> size = sizes[ch];
   for(ll i=0;i<cloth.size();i++){
       if(size.find(cloth[i]) != size.end()){
           temp.push_back(cloth[i]);
       }
   }
   return temp; 
}

vector<string> addfiltercolour(string ch, vector<string> &cloth){
    vector<string> temp;
    set<string> color = colours[ch];
   for(ll i=0;i<cloth.size();i++){
       if(color.find(cloth[i]) != color.end()){
           temp.push_back(cloth[i]);
       }
   }
   return temp; 
}

void Filter(){

    cout<<"You can filter the items based on shape/size/colour"<<endl;
    cout<<"How many filters do you want to add?"<<endl;
    ll add; cin>>add;
    cout<<"Enter your choices with spaces"<<endl;

    vector<string> ans;
    ans = clothes;

    bool c = false, sh = false, sz = false;

    for(ll i=0;i<add;i++){
        string ch; cin>>ch;
        if(ch == "colour")
        c = true;
        if(ch == "shape")
        sh = true;
        if(ch == "size")
        sz = true;
    }

    if(c){
    cout<<"Enter colour to be filtered: ";
    string colour; cin>>colour;
    ans = addfiltercolour(colour, ans);
    }

    if(sh){
    cout<<"Enter shape to be filtered: ";
    string shape; cin>>shape;
    ans = addfiltershape(shape, ans);
    }

    if(sz){
     cout<<"Enter size to be filtered: ";
    string size; cin>>size;
    ans = addfiltersize(size, ans);
    }

    cout<<"Filtered items with their id: "<<endl;

    if(ans.size()==0)
    cout<<"No items present"<<endl;

    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return;
}

void solve(){
repeat:
    cout<<"Enter number of clothes available for sell"<<endl;
    ll n; cin>>n;
    for(ll i=0;i<n;i++){
    cout<<"Enter Cloth ID"<<endl; 
    string id; cin>>id;
    clothes.push_back(id);

    cout<<"Enter Shape"<<endl;
    string shape; cin>>shape;
    shapes[shape].insert(id);

    cout<<"Enter Size"<<endl;
    string size; cin>>size;
    sizes[size].insert(id);

    cout<<"Enter Colour"<<endl;
    string colour; cin>>colour;
    colours[colour].insert(id);
    }
repeat2:
    cout<<"Choose: "<<endl;
    cout<<"1. Enter more items\n2. Filter items\nAny other num. Exit"<<endl;

    int ch ; cin>>ch;

    switch (ch)
    {
    case 1:
        goto repeat;
        break;
    case 2:
        Filter();
        break;
    
    default:
        break;
    }

    goto repeat2;
}

int main(){

    cout<<"--------------Welcome to Store------------"<<endl;
    cout<<"There is no items in the shop. Please enter the items available for sell."<<endl;
    cout<<"Press Y for going forward , press any key for exit"<<endl;

    char ch; cin>>ch;

    switch(ch){
        case 'Y':
        solve();
        break;
        default:
        break;
    }
    return 0;
}