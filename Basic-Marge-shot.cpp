#include<iostream>
#include<vector>
using namespace std;
vector marge(vector<int>&arr1,vector<int>&arr2){
    int m=arr1.size();
    int n=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n && j<=m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;
        }
        else{
            res[k]=arr2[j];
            j++;
            k++;
        }
        
    }if(i==n){
            while(j<=m-1){
                res[k]=arr2[j];
                k++;
                j++;
            }
        }
    if(j==m){
            while(i<=n-1){
                res[k]=arr1[i];
                k++;
                i++;
            }
        }
        
    return res;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    int a=v1.size()-1;
    for(int i=0;i<=a;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int>v2;
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);
    v2.push_back(11);
    v2.push_back(12);
    int b=v2.size()-1;
    for(int i=0;i<=b;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v =marge(arr1,arr2);
    int c=v.size()-1;
    for(int i=0;i<=c;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}