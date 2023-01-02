#include<iostream>
using namespace std;

//swapping the values "passing by value"
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

//swapping the values "passing through refrence"
void swap1(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    int a=10;          //initializing
    int *aptr;         //initializing pointer
    aptr=&a;           //assigning address of a in aptr

    cout<<"address of 10:"<<&a<<endl;    //printing address of a
    cout<<"again printing add of 10:"<<aptr<<endl;  //printing address of a
    cout<<"printing value stored in a:"<<*aptr<<endl; //printing value of aptr means derefrencing 

    *aptr=20;
    cout<<"printing value:"<<*aptr<<endl;

    //pointer airthmetic

    /*now as we have seen above that value of a variable can be changed using 
    pointers, but if do it like aptr++ it wont increment its value by 1 but 
    it shift to the next memory location ,lets suppose if it is at memory 
    location 200 then it will shift to the memory location 2004 as int takes 
    size of 4 bits but it will move by only one bit in case of char*/

    //pointers as array

   /*int arr[] if we just cout arr it gives the address of value at index 0
   the catch is that we cannot increment or decrement its value*/

   int arr[]={10,20,30};
   cout<<"print value at indx 1:"<<*arr<<endl;

   aptr=arr;//here the address arr pointing at is being assigned to aptr

   cout<<"address of the indxs:"<<endl;
   for(int i=0;i<3;i++){
        cout<<aptr<<endl;
        aptr++;//we are incrementing the vlaue aptr to get the next address
   }

   cout<<"value at each index:"<<endl;
   for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        /*arr is an index now asdding +1 will shift the pointer at next index not 
        changing the location at which arr is pointing at*/

   }

   //pointer to pointer
   //means a pointer which is pointing at another pointer.

   int b=25;
   aptr=&b;
   int **ptr=&aptr;
   cout<<"address stored in aptr pointer:"<<*ptr<<endl;//it will print the address of ptr
   cout<<"value stored in b:"<<**ptr<<endl;//and this will print the value aptr is pointing

   //passing pointer to function

   /*there are two ways to pass value to a function pass by value 
   and pass by refrence in pass by value the value that is being 
   passed is local value means whatever you do with this value it 
   wont have any effect the value in main() but on the other hand 
   if you pass it by refrence it will be global value and it will 
   changed throughout your code take as an example of array.pass 
   it in a function and make any change int it and you wll understand it*/

   int v=2;
   int w=20;
   swap(v,w);
   cout<<v<<" "<<w<<endl;
   swap1(&v,&w);
   cout<<v<<" "<<w<<endl;

   return 0;


}