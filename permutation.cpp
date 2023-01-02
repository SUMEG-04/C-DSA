#include"bits/stdc++.h"
using namespace std;

void permutn(vector<int> &a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permutn(a,idx+1);
        swap(a[i],a[idx]);

    }
    return;
}
vector<vector<int>> ans;

int main(){
    //given an array nums of distinct integers, return sll the possible permutations.You can return the answer in any order.
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    permutn(a,0);
    for(auto v: ans){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }


}