#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the limit"<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
       
        sum = sum +i;
        i=i+1;
      
    }
    cout<<"total sum is"<<sum<<endl;
    return 0;
}