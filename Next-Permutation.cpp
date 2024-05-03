#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>&v){
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        return;
    }
    reverse(v.begin()+idx+1,v.end());
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            i=j;
            break;
        }
    }
    int temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;
    return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    int n=v.size()-1;
    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    nextPermutation(v);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}