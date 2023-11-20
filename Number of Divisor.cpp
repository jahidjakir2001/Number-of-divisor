#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
void number_of_divisor(int a)
{
    set<int>s;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            s.insert(i);
            if(a/i!=i){
                s.insert(a/i);
            }
        }
    }
    cout<<"The number of factor "<<a<<" = ";
    for(auto u:s){
        cout<<u<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        number_of_divisor(a);
    }
}
