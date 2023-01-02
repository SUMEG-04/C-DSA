#include<iostream>
using namespace std;


//rectangle
void patrn1(int n,int m){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//hollow rectangle
void patrn2(int n,int m){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1 || i==n){
				cout<<"*";
			}
			else if(j==1 || j==m){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}

//intveted pyramid
void patrn3(int n, int m){
	
	for(int i=n;i>=1;i--){
		for(int j=i;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

//half pyramid after 180* rotation
void patrn4(int n, int m){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//half pyramid using numbers
void patrn5(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}

//FLoyd's triangle 
void patrn6(int n){
	
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count;
			count++;
		}
		cout<<endl;
	}
}


//Butterflly pattern
void patrn7(int n,int m){
	
	n=m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int k=1;k<=2*n-2*i;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int k=1;k<=2*n-2*i;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//inverted number pattern
void patrn8(int n){
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}

//0-1 pattern
void patrn9(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<"1";
				
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}

//rhombus pattern
void patrn10(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//pyramid number pattern
void patrn11(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j;
			cout<<" ";
		}cout<<endl;
	}
}

//Palindromic pattern
void patrn12(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=i;j>=1;j--){
			cout<<j;
			
		}
		for(int j=2;j<=i;j++){
			cout<<j;
		}cout<<endl;
	}
}

//Kite pattern
void patrn13(int n){
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i*2-1;j++){
			cout<<"*";
			
		}
		cout<<endl;
    }
    for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i*2-1;j++){
			cout<<"*";
			
		}
		cout<<endl;
    }
}
void patrn14(int n,int m){
	for(int i=1;i<=3;i++){
    	for(int j=1;j<=m;j++){
    		if((i+j)%4==0 || (i==2 && j%4==0) ){
    			cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
}

int main(){
	int n,m;
	cout<<"rows:";
	cin>>n;
	cout<<"column:";
	cin>>m;

	patrn1(n,m);
	cout<<endl;
	patrn2(n,m);
	cout<<endl;
	patrn3(n,m);
	cout<<endl;
	patrn4(n,m);
	cout<<endl;
	patrn5(n);
	cout<<endl;
	patrn6(n);
	cout<<endl;
	patrn7(n,m);
	cout<<endl;
	patrn8(n);
	cout<<endl;
	patrn9(n);
	cout<<endl;
	patrn10(n);
	cout<<endl;
	patrn12(n);
	cout<<endl;
	patrn13(n);
	cout<<endl;
	patrn14(n,m);


	return 0;
}
