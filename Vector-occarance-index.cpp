#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(16);
    v.push_back(1);
    v.push_back(7);
    v.push_back(19);
    int x=1;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
        }
    }
    cout<<idx;
    return 0;
}