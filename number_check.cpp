#include<iostream>
#include<math.h>
using namespace std;

//if prime or not
void prime(int n){
	
	bool flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<"non-prime"<<endl;
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		cout<<"prime"<<endl;
	}
}

//reverse a number
void revnum(int a){
	
	int rev=0;
	while(a>0){
		int lastdig=a%10;
		rev=rev*10+lastdig;
		a=a/10;
	}
	cout<<rev<<endl;
}

//armstrong number
void armstrong(int n){
	cout<<n<<endl;
	int sum=0;
	int orgv=n;
	while(n>0){
		double lastdig=n%10;
		sum=sum+pow(lastdig,3);
		n=n/10;
		cout<<sum<<endl;
	}
	cout<<sum<<endl;
	if(orgv==sum){
		cout<<"armstrong num"<<endl;
	}
	else{
		cout<<"not armstrong num"<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	
	int a=n;
	prime(n);
	
	revnum(a);
	
	armstrong(n);


	return 0;
}
