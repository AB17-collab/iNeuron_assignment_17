#include<iostream>
#include<cstring>
using namespace std;
void merge(string &arr,int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right - mid;
    char a[n1];
    char b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[left+i];
    }
    for(int j=0;j<n2;j++){
        b[j] = arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(a[i]<b[j])
            arr[k++] = a[i++];
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
}
void mergeSort(string &k,int left,int right){
    if(left<right){
        int mid = (left+right)>>1;
        mergeSort(k,left,mid);
        mergeSort(k,mid+1,right);
        merge(k,left,mid,right);
    }
}
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    mergeSort(k,0,k.size()-1);
    cout<<"The string arranged in ascending order is:"<<k;
    return 0;
}
