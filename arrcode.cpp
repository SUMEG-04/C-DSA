#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }

    cout<<"max Sum of subarray:";
    int currSum[n+1];
    currSum[0]=0;
    for(int i=1;i<=n;i++){
        currSum[i]=currSum[i-1]+arr[i-1];
    }

    int maxSum=INT8_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currSum[i]-currSum[j];
            maxSum=max(sum,maxSum);
        }
    }


    cout<<maxSum<<endl;

    int ar[n];
    int currentsum=0;
    int maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    cout<<maxsum<<endl;

    //Kaden's algo
//max subarray sum
    int currsum=0;
    maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        {
            maxsum=max(maxsum,currsum);
        }
    }

    cout<<maxsum<<endl;

    //maximum circular subarray sum

    
    return 0;

}