#include<iostream>
using namespace std;
int main(){
    string takeInput;
    cout<<"Enter a string:";
    cin>>takeInput;
    char ch;
    cout<<"Enter a character you want to search for in a string:";
    cin>>ch;
    size_t found = takeInput.find(ch);
    if(found != string::npos){
        cout<<"Character is present in the string!";
    }
    else{
        cout<<"The character isn't present in the string";
    }
    return 0;
}