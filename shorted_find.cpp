#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cout <<"Enter the size of array : ";
    cin>>n;
    cout <<"Enter element: \n";
     priority_queue<int, vector<int>, greater<int>> p;
    vector <int >v;
    for (int i=0;i<n;i++){
        cin>>a;
        p.push(a);
    }
    cout <<"resultL:";
    while(!p.empty()){
        v.push_back(p.top());
        p.pop();
        cout <<endl;
    }
    for (auto i:v){
        cout <<i<<" ";
    }
    cout<<"\nafter shorted the  middle= "<<v[n/2];
}