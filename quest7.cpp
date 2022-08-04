#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string k;
    cout<<"Enter the string:";
    getline(cin,k);
    int countAlphabet = 0;
    int countNumbers = 0;
    int countSpecialCharacter = 0;
    for(int j=0;k[j];j++){
        if((k[j]>=65 && k[j]<=90) || (k[j]>=97 && k[j]<=122)) 
            countAlphabet++;
        else if((k[j]>=48 && k[j]<=57))
            countNumbers++;
        else
            countSpecialCharacter++;
    }
    cout<<"The number of alphabets is:"<<countAlphabet<<" the numbers are:"<<countNumbers<<" and special characters are:"<<countSpecialCharacter;
    return 0;
}