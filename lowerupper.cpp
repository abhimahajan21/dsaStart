#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"this is lowercase character"<<endl;
    }
        else if (ch>='A' && ch<='Z'){
            cout<<"this is uppercase character"<<endl;

        }
        else if (ch>='0' && ch<='9'){
            cout<<"this is numeric"<<endl;
        }
    



    return 0;
}