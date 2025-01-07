/*input two string and do the opereation in such a way-- 
            abcd
            ef
            output: 4 2
                    abcdef
                    ebcd af*/
#include <iostream>
#include <sstream>
using namespace std;
int main(){

stringstream ss;
string a,b,m,n;
cin>>a>>b;
int a1=a.size();
int b1=b.size();
m=b[0];
n=a[0];
for (int i=1; i<a1;i++){
m=m+a[i];
}
for (int i=1; i<b1;i++){
n=n+b[i];
}
a=a+b;
cout<<a1<<" "<<b1<<"\n"<<a<<"\n"<<m<<" "<<n;

}