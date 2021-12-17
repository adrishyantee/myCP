#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[10];
    int i;
    cout<<"enter string to check"<<" ";
    gets(str);
    reverse(str,str+10);
    cout<<"the string is"<<" "<<str;
    return 0;
    
}