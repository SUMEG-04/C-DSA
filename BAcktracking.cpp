#include<iostream>
using namespace std;

bool isrout(int i,int j,int** ar,int n){
    if(i<=n && j<=n && ar[i][j]==1){
        return true;
    }
    return false;
}

int ratmaze(int** ar,int i,int j,int n,int** solar){
    if(i==n-1 && j==n-1){
        solar[i][j]=1;
        return 1;
    }
    if(isrout(i,j,ar,n)){
        solar[i][j]=1;
        if(ratmaze(ar,i+1,j,n,solar)){
            return true;
        }
        if(ratmaze(ar,i,j+1,n,solar)){
            return true;
        }
        solar[i][j]=0;
        return false;

    }
    return false;
}

int main(){

    //`
    // backtracking is an algorithmic-technique for solving recursive problems 
    // by trying to build every possible solution incremently and removing those solutions
    //  that fail to staisfy tje constraints of the problem at any point of time.

    //rat in maze
    int n;
    cin>>n;

    int** ar=new int*[n];
    for(int i=0;i<n;i++){
        ar[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }

    int** solar=new int*[n];
    for(int i=0;i<n;i++){
        solar[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            solar[i][j]=0;
        }
    }

    if(ratmaze(ar,0,0,n,solar)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solar[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 1 0 