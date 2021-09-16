#include <bits/stdc++.h>
using namespace std;

bool checkforSubsequence(string S,
                         string target)
{
 
    // Declare a stack
    stack<char> s;
 
    // Push the characters of
    // target into the stack
    for (int i = 0; i < target.size(); i++) {
        s.push(target[i]);
    }
 
    // Traverse the string S in reverse
    for (int i = (int)S.size() - 1; i >= 0; i--) {
 
        // If the stack is empty
        if (s.empty()) {
 
            
            return true;
        }
 
        // if S[i] is same as the
        // top of the stack
        if (S[i] == s.top()) {
 
            // Pop the top of stack
            s.pop();
        }
    }
 
    // Stack s is empty
    if (s.empty())
        return true;
    else
        return false;
}

int main(){

    string s1, s2;
    cin>>s1>>s2;

    if(checkforSubsequence(s1,s2))
    cout<<"automaton"<<endl;


    else{
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i =0;i<s1.size();i++){
            mp1[s1[i]]++;
        }

        for(int i =0;i<s2.size();i++){
            mp2[s2[i]]++;
        }

        int count=0;

        for(int i =0;i<s2.size();i++)
        {
            if(mp1.find(s2[i])!=mp1.end() && mp2[s2[i]]<=mp1[s2[i]])
            count++;
            else
            {
                cout<<"need tree"<<endl;
                return 0;
            }
        }
       if(count==s1.size())
        cout<<"array"<<endl;
        else if(count<s1.size())
        cout<<"both"<<endl;        
        else
        cout<<"need tree"<<endl;
    }
    return 0;
}