#include<iostream>
using namespace std;

void printarr(int n,int ar[]){
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

//sorting selection sort
void selectionsort(int n,int ar[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ar[j]<ar[i]){
				int temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;

			}
		}
	}
	printarr(n,ar);
}

//sorting bubble sort
void bubblesort(int n,int ar[]){
	int count=1;
	while(count<n){
		for(int i=0;i<n-count;i++){
			if(ar[i]>ar[i+1]){
				int temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		}
		count++;
	}
	printarr(n,ar);

}

//sorting insertion sort
void insertionsort(int n,int ar[]){
	for(int i=1;i<n;i++){
		int curr=ar[i];
		int j=i-1;
		while(ar[j]>curr && j>=0){
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=curr;
	}
	printarr(n,ar);
}

//max of array
void MaxOfArr(int n,int ar[]){
	int mx=-199999999;
	for(int i=0;i<n;i++){
		mx=max(mx,ar[i]);
		cout<<mx<<endl;
	}
}

//sum of sebsequent subarray
void SumOfSubarr(int n,int ar[]){
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum=sum+ar[j];
			cout<<sum<<endl;
		}
	}
}

//longest contiguous arithmematic subarray
int LongArthSubarr(int n,int ar[]){

	int prevdif=ar[1]-ar[0];
	int curr=2,maxlen=2;
	int j=2;
	while(j<n){
		if(prevdif==ar[j]-ar[j-1]){
			curr++;
		}
		else{
			prevdif=ar[j]-ar[j-1];
			curr=2;
		}
		maxlen=max(curr,maxlen);
		j++;
	}
	return maxlen;
}

//record breking day(int terms of no of visitors)
int recbreaking(int n,int ar[]){
	int count=0;
	int recday=-1;
	if(n==1){
		return 1;
	}
	for(int i=0;i<n;i++){
		if(ar[i]>recday && ar[i]>ar[i+1]){
			count++;
			
		}
		
		if(i==n-1 && ar[i]>recday)
		{
			count++;
		}
		recday=max(recday,ar[i]);
	}
	return count;
}

//first repeating element
/*int fstrepele(int n, int ar[]){
	
	const int N=1e6+2;
	int a[N];
	int minidx=INT8_MAX;
	cout<<"1";
	for(int i=0;i<N;i++){
		a[i]=-1;
	}
	cout<<"2";
	for(int i=0;i<n;i++){
		if(a[ar[i]]!=-1){
			minidx=min(minidx,a[ar[i]]);
		}
		else{
			a[ar[i]]=i;
		}
	}
	cout<<"3";
	if(minidx==INT8_MAX){
		return -1;
	}
	else{
		return (minidx + 1);
	}
}*/

//subarray with given sum
void subarrsum(int n ,int s, int ar[]){
	int i=0,j=0,st=-1,en=-1,sum=0;
	while(j<n && sum+ar[j]<=s){
		sum+=ar[j];
		j++;
	}
	if(sum==s){
		cout<<i+1<<" "<<j<<endl;
		return;
	}

	while(j<n){
		sum+=ar[j];
		while(sum>s){
			sum-=ar[i];
			i++;
		}

		if(sum==s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<<"index:"<<st<<" "<<en<<endl;
}

//updating your array
void createarr(int n,int p,int arr[]){
	cout<<"enter elements in array:"<<endl;
	while(p<n){
		cin>>arr[p];
		p++;
	}
}

//to find smallest positive missing number in an array
void misngnum(int n,int ar[]){
	const int N=1e6+2;
	bool check[N];
	for(int i=0;i<n;i++){
		check[i]=false;
	}
	for(int i=0;i<n;i++){
		if(ar[i]>=0){
			check[ar[i]=1];
		}
	}
	int ans=-1;
	for(int i=1;i<N;i++){
		if(check[i]==false){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
}

//character array
void chararr(){
	int n;
	cout<<"Enter the length of character array:";
	
	cin>>n;
	cin.ignore();

	cout<<"enter your string";
	char ar[n+1];
	cin.getline(ar,n);
	cin.ignore();

	bool check=1;

	for(int i=0;i<n;i++){
		if(ar[i]!=ar[n-1-i]){
			check=0;
			break;
		}

	}
	if(check==true)
	    cout<<"word is palindrome"<<endl;
	else
	    cout<<"word is not palindrome"<<endl;

	//largest word in a sentence
	int i=0;
	int currlen=0,maxlen=0;
	int st=0,maxst=0;
	while(1){
		if(ar[i]==' ' || ar[i]=='\0'){

			if(currlen>maxlen){
				maxlen=currlen;
				maxst=st;
			}

			currlen=0;
			st=i+1;
		}
		else
		currlen++;
		if(ar[i]=='\0'){
			break;
		}
		i++;

		cout<<maxlen<<endl;
		for(int i=0;i<maxlen;i++){
			cout<<ar[i+maxst];
		}
	}
}

void printsubarr(int arr[],int n){
	for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}

void maxsumsubarr(int arr[],int n){
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
}

void kadenalgo(int arr[],int n){
	int currsum=0;
    int maxsum=INT8_MIN;
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

}

int main(){
	int n,p=0;
	cout<<"enter length of array:";
	cin>>n;
	cout<<n<<endl;
	int arr[n];
	createarr(n,p,arr);

	cout<<"Original array:";printarr(n,arr);
	
	//cout<<"lowest index of first repeating element:"<<fstrepele(n,arr);

	int choice;
	"pause";
	do{
	  ("cls");
	cout<<"\nDear user here are some option provided to you can choose from them as you desired:\n";
	cout<<"\n\t1.Sorting";
	cout<<"\n\t2.Total no of record breaking day";
	cout<<"\n\t3.Max of array";
	cout<<"\n\t4.Sum of subsequet array";
	cout<<"\n\t5.MAx length of sub array with common difference"
	    <<"\n\t6.to find if sum of a particular no. exist"
		<<"\n\t7.to find the smallest +ve missing number in an array"
		<<"\n\t8.UPdate array:"
		<<"\n\t9.charr array to check a word is palindome or not"
		<<"\n\t10.printing all the sub arrays"
		<<"\n\t11.max sum of subarray"
		<<"\n\t12.max sum of subarray using kaden's algo"
		<<"\n\t0.Exit"<<endl;
	cout<<"\nEnter your choice:";
	
	cin>>choice;


	switch(choice){

		
		case 0 :
		break;

		case 1 :
		cout<<"Array after selection sort:";selectionsort(n,arr);
        cout<<"Array after bubble sort:";bubblesort(n,arr);
	    cout<<"Array after insrtion sort:";insertionsort(n,arr);
		break;

		case 2 :
		cout<<"total no of record breaking day:"<<recbreaking(n,arr)<<"\n";
		break;

		case 3 :
		cout<<"Max of array:"<<endl;MaxOfArr(n,arr);
		break;

		case 4 :
		cout<<"Sum of subsequent sub array:"<<endl;SumOfSubarr(n,arr);
		break;

		case 5 :
		cout<<"Max length of subarray with common diff.: "<<LongArthSubarr(n,arr);
		break;

		case 6:
		cout<<"Enter the no. whose sum you want to find in your array:";
		int x;
		cin>>x;
		subarrsum(n,x,arr);
		break;

		case 7:
		misngnum(n,arr);
		break;

		case 8:
		cout<<"length of array will remain same you can only only update your elemnts";
	    createarr(n,p,arr);
		break;

		case 9:
		chararr();
		break;

		case 10:
		printsubarr(arr,n);
		break;

		case 11:
		maxsumsubarr(arr,n);
		break;
		case 12:
		kadenalgo(arr,n);
		break;
		default:
		cout<<"invalid input";
		break;
	}
	("pause");
	}while(choice!=0);
}
