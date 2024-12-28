/*Ron’s mother has gifted him a chocolate bar for his birthday. The chocolate 
bar is divided into 𝑛
n squares, where each square has an integer value representing its sweetness.
Ron wants to share his chocolate with his friend Hermione. To make it special, 
he wants to find contiguous segments of the chocolate bar such that:
The segment consists of exactly 𝑚
m squares.The sum of the integers in the segment equals 𝑑
d.
Your task is to determine how many such segments exist.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d,m,count =0;
    cin>>n;
    vector<int>s(n);
    for (int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>d>>m;
   for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }
        if (sum == d) {
            count++;
        }
    }
    cout <<count<<endl;
}