#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces =0;
        while(spaces<i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<n-i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}