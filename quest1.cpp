#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string name = "Arnab Deb";
    int i;
    for(i=0;name[i];i++);
    cout<<"The length of the string is:"<<i;
    return 0;
}