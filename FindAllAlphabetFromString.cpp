#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin,s);
set<char>c;
for (char ch:s){
    if(isalpha(ch)){
        c.insert(tolower(ch));
    }
}
    if(c.size()==26){
        cout<<"program";
    }
    else{
        cout <<" not program";
    }

    return 0;
}