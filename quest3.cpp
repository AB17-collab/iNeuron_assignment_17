#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int> vowels;
    vowels['a'] = true;
    vowels['e'] = true;
    vowels['i'] = true;
    vowels['o'] = true;
    vowels['u'] = true;
    vowels['A'] = true;
    vowels['E'] = true;
    vowels['I'] = true;
    vowels['O'] = true;
    vowels['U'] = true;
    string j;
    cout<<"Enter a string of your choice:";
    getline(cin,j);
    int count = 0;
    for(int i=0;j[i];i++){
        if(vowels[j[i]]){
            count++;
            vowels[j[i]] = false;
        }
    }
    cout<<"The number of vowels in the string is:"<<count;
    return 0;
}