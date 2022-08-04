#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string org;
    string copy = "";
    cout<<"Enter the original string:";
    getline(cin,org);
    for(int i=0;org[i];i++){
        copy += org[i];
    }
    cout<<"The original string:"<<org<<"\n"; 
    cout<<"The copied string:"<<copy;
    return 0;
}