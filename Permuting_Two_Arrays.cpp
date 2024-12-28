/*There are  two n-element arrays of integers, A and B. Permute them into some
A' and B' such that the relation. A'[i]+B'[i]>=k  holds for all i where 0<=i<n .
There will be q queries consisting of A, B, and k. For each query, return YES if 
some permutation A', B'  satisfying the relation exists. Otherwise, return NO.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q;
    cin>>q;
    while(q--){
        cin>>n>>k;
         vector<int >A(n);
    vector <int >B(n);
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    for (int i=0;i<n;i++){
        cin>>B[i];
    }
   sort(A.begin(),A.end());
   sort(B.rbegin(),B.rend());
   bool count = false;
           for (int i=0;i<n;i++){
            if(A[i]+B[i]<k){
                count = false;
            break;
            }
            else{
                count=true;
            }}
    if(count==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}}
