#include<iostream>
using namespace std;

void dfs(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    for(int j=0;j<10;j++){
        dfs(10*i+j,n);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        dfs(i,n);

    }

}