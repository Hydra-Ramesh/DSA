#include<iostream>
#include<vector>
using namespace std;
void sort01m2(vector < int > &v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){ 
        if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }

        else if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else mid++;

    }
}
int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << "th element : ";
        cin >> v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01m2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}