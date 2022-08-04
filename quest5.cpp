#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    for(int i=0;k[i];i++){
        if(k[i]>='A' && k[i]<='Z'){
            k[i] += 32;
        }
    }
    cout<<"The string in lowercase is:";
    for(int j=0;k[j];j++){
        cout<<k[j];
    }
    return 0;
}