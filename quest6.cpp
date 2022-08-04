#include<iostream>
using namespace std;
int main(){
    string original;
    cout<<"Enter the string to be reversed:";
    getline(cin,original);
    for(int i=0;i<original.size()/2;i++){
        char temp = original[i];
        original[i] = original[original.size()-1-i];
        original[original.size()-1-i] = temp;
    }
    cout<<"The reversed string is: ";
    for(int j=0;original[j];j++){
        cout<<original[j];
    }
    return 0;
}
