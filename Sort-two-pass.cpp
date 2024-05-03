#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noz=0;
    int noo=0;
    int nozz=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else if(v[i]==1) noo++;
        else nozz++;
    }
    for(int i=0;i<n;i++){
        if(i<noz)v[i]=0;
        else if(i<noz+noo)v[i]=1;
        else v[i]=2;
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}