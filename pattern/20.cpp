#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    
   
    while(i<n){
        int j=0;
         char ch = 'A'+i;
        while(j<n){
            cout<<ch<<" ";
            ch++;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}