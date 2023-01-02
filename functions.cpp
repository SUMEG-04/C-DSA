#include<iostream>
using namespace std;

int add(int num1,int num2){
	int sum=num1+num2;
	return sum;
}
void print(int val){
	cout<<val<<endl;
}
int main(){
	
	int a,b;
	cout<<"enter val:"<<endl;
	cin>>a>>b;
	print(add(a,b));
	return 0;
}
