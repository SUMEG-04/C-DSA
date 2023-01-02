#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos){
    return (n | (1<<pos));
}

int clearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}

int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n & mask;
    return n | (value<<pos);
}

int ispowerof2(int n){
    return (n && !(n & n-1));
}

int countOnes(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}

void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
void unique1(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int setbit=0;
    int pos=0;
    int temp=xorsum;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum >> 1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(getBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(temp^newxor)<<endl;
}

int unique2(int arr[],int n){
    int result =0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
            if(sum%3!=0){
                result=setBit(result,i);
            }
        }
    }
    return result;
}
int main(){

    /*get bit
    n=0101
    suppose we need to get a bit at position,i=2(indexing from right)
    so we will make a number and place 1 at that palce
    1<<i=0100(left shifting of 1 by 2)
    now
    0101 & 0100 = 0100
    now we know there is 1 at index 2
    if n & (1<<i)!=0,then bit is 1*/

    cout<<getBit(5,2)<<endl;

    /*set bit
    as the name define itself set a bit at specific index
    n=0101
    suppose we need to set bit at position,i=1
    1<<i=0010
    0101 | 0010 = 0111*/

    cout<<setBit(5,2)<<endl;

    /*clear bit
    n=0101
    suppose we need to clear bit at pos,i=2
    1<<i=0100
    ~0100=1011
    0101 & 1011 = 0001
    */

   cout<<clearBit(5,2)<<endl;

   /*update bit
   n=0101
   suppose we need to update bit at position,i=1 to 1
   1<<i=0010
   ~0010=1101
   0101 & 1101=0101
   1<<i=0010
   0101|0010=0111*/

   cout<<updateBit(5,1,1)<<endl;

   // a program to check if a number ispower of 2
   /*n=5=101        n=7=0111
     n-1=6=110      n-1=8=1000
     we have to observe the patter that if we flip the
    right most bit "1"  of n then it will become n
     and now if we and operation on n and n-1
     0110 & 0101= 0100   1000 & 0111=  0000
     8 comes from power 2 but 6 not so 
     we just need to perform and operation on n & n-1 to check
     */

    cout<<ispowerof2(6)<<endl;

    /*a program to count the number of ones in binary representation of a number
    n & n-1 has only same bits as n excepy the right most set bit 
    n=11=01011,n-1=10=01010
    performing n & n-1
    =01010=10=n
    n=10=01010,n-1=9=01001
    again performing n & n-1
    =01000=8=n
    n=8=01000,n-1=7=0111
    performing n & n-1
    =0000=0
    after performing & op. 3 times we get 0 and that many
    1 contains binary 11 */

    cout<<countOnes(11)<<endl ;

    /*a program to generate all possible subsets of a set 
    {a,b,c}*/

    int arr[4]={1,2,3,4};
    subsets(arr,4);

    /*write a program to find 1 unique number in an arraty
    where all number except one,are prsent twice
    if we apply xor on a number 
    n=6=110
    110
    110
    ---
    000
    we will get 0 if a number is present twice*/

    int ar[7]={1,2,3,4,1,2,3};
    cout<<unique(ar,7)<<endl;

    /*write a program to find 2 unique numbers in an array
    where all number except two, are present twice
    */

   int a[8]={2,4,6,7,4,5,6,2};
   unique1(a,8);

   /*write a program to find a unique number in an array
   where all numbers except one,are present thrice
   */

  int av[10]={1,3,2,3,4,2,1,1,3,2};
  cout<<unique2(av,10)<<endl;
    return 0;
}