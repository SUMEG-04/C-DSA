#include<iostream>
using namespace std;

//sum
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum=Sum(n-1);
    return n+ prevSum;
}

//power
int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower=Power(n,p-1);
    return n*prevPower;
}

//factorial
int factorial(int n){

    if(n==0){
        return 1;
    }
    int prevNum=factorial(n-1);
    return n*prevNum;
}

//fibonacci
int fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2) ;
}

//sorting 
bool sort(int arr[],int n){
    
    if(n==1){
        return true;
    }
    bool restArray=sort(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

//decending
void dec(int n){

    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
    
}

//ascending
void asc(int n){

    if(n==0){
        return;
    }
    asc(n-1);
    cout<<n<<endl;
}

//first last occurance
int firoccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firoccur(arr,n,i+1,key);
}
int lastoccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastoccur(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if (arr[i]==key){
        return i;
    }
    return -1;
    
}

//reversing string
void revStr(string st){
    if(st.length()==0){
        return;
    }
    string res=st.substr(1);
    revStr(res);
    cout<<st[0];
}

//replacing a char with num
void repChar(string st){
    if(st.length()==0){
        return;
    }
    if(st[0]=='p' && st[1]=='i'){
        cout<<"3.14";
        repChar(st.substr(2));
    }
    else{
        cout<<st[0];
        repChar(st.substr(1));
    }

}

//tower of hanoi
/*
    -
   ---
  -----
---------
*/
void towerofHanoi(int n,char src,char dest,char helper){

    if(n==0){
        return ;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}

//removing all duplicates
string duplicate(string st){

    
    if(st.length()==0){
        return "";
    }
    char ch=st[0];
    string str=duplicate(st.substr(1));
    if(ch==str[0]){
        return str ;
    }
    return (ch+str);
}

//move all x to the end
string moveX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string str=moveX(s.substr(1));
    if(ch=='x'){
        return (str+ch) ;
    }
    return (ch+str);
}

//generate all sub string 
void subseq(string s,string ans){
    
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string res=s.substr(1);

    subseq(res,ans);
    subseq(res,ans+ch);
}

//generate all sub string  with ascii
void subseqascii(string s,string ans){
    
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    int code=ch;
    string res=s.substr(1);

    subseqascii(res,ans);
    subseqascii(res,ans+ch);
    subseqascii(res,ans+to_string(code));
}

string keypadArr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wyxz"};
//print all possible words from phone digits
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string res=s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(res,ans+code[i]);
    }
}

//all posible permutation
void permutataion(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);

        permutataion(ros,ans+ch);
    }
}

//count all possible path
int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countpath(s+i,e);

    }
    return count;
}

int countpathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countpathMaze(n,i+1,j)+countpathMaze(n,i,j+1);
}

//tiling problem
//given a "2xn" boared and tiles of size "2x1", count the number of ways to title the given board using these tiles
int tiles(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return tiles(n-1)+tiles(n-2);
}

//friend pairing problem
//find the number the ways in which n friend can remain single or can be paired up.
int frndpair(int n){
    if(n==0  || n==1 || n==2){
        return n;
    }
    return frndpair(n-1)+frndpair(n-2)*(n-1);
}

//0-1 Knapsack problem
//put n items with given weight and values in a knapsack of capacity
//W to get the maximum total value in the knapsack
int knapsack(int val[],int wt[],int n,int W){

    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(val,wt,n-1,W);
    }
    return max(knapsack(val,wt,n-1,W-wt[n-1])+val[n-1],knapsack(val,wt,n-1,W));

}
int main(){

    //recursion

    //when a function calls itself to make a problem samller

    int n,p;
    cin>>n>>p;
    cout<<Sum(n)<<endl;

    cout<<Power(n,p)<<endl;

    cout<<factorial(n)<<endl;

    cout<<fib(n)<<endl;

    int ar[5]={1,2,3,4,5};
    cout<<sort(ar,5)<<endl;

    dec(n);

    asc(n);

    int arr[]={4,2,1,2,5,2,7};
    cout<<firoccur(arr,7,0,2)<<endl;
    cout<<lastoccur(arr,7,0,2)<<endl;

    revStr("binod");
    cout<<endl;

    repChar("ppixxvpiimpppwippi");
    cout<<endl;

    towerofHanoi(3,'A','C','B');

    cout<<duplicate("aaaabbbbccdddddd")<<endl;

    cout<<moveX("axxbbxcefxhix")<<endl;

    subseq("ABC","");

    subseqascii("ABC","");

    permutataion("ABC","");
    
    cout<<countpath(0,3)<<endl;

    cout<<countpathMaze(3,0,0)<<endl;

    cout<<tiles(4)<<endl;

    cout<<frndpair(3)<<endl;

    int wt[]={10,20,30};
    int val[]={100,50,150};
    int W=50;
    cout<<knapsack(val,wt,3,W);

    return 0;

}