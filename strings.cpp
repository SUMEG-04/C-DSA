#include<iostream>
#include<string>//special header file for strings
#include<algorithm>//for sorting array
using namespace std;

 int main(){


    //this code compeletly contain operation on strings
    //hope each and every line of code and function 
    //i made will be easily understable and helpfull for you

    //sting will store characters and our array can also stores character
    //but the diff is that size an array it fixed in starting, no conctination or append,
    //where as size of string can be changed,and there is also '\0' i.e. terminating character

    /*string str;
    cin>>str;cout<<str<<endl;
    //taking input and showing its output


    string strl(5,'n');
    cout<<strl<<endl;
    //creating a string with 5 n char

    string st="codder";
    cout<<st<<endl;*/

    /*string str;
    cout<<"enter a string:";
    getline(cin,str);
    cout<<str<<endl;

    //getline why to use getline when we just use cin,'cause due to the reason that
    //it will take only first word as its input as soon as it detect space it wont read any further
    
    //different functions of string

    string s1="fam",s2="ily";//concatinationg two strings
    cout<<"concatinated string is:"<<s1+s2<<endl;

    s1.append(s2);cout<<s1<<endl;//appending s2 in s1

    cout<<s1[5]<<endl;//printing element on a particular index

    string wb="oha +f+ af+ a+a 4";
    wb.clear();//function to empty a string (not deleting)
    cout<<wb<<endl; 

    s1="abc";s2="abc";
    cout<<s2.compare(s1)<<endl;//comparing s1 with s2 s2>s1 ouptut +ve,equal 0

    if(wb.empty()){//checking if string is empty of not
      cout<<"string is empty"<<endl;
    }

    wb="biuasuadw1651sddddw";
    wb.erase(3,5);//to delete element of string from index 3 del 5 char
    cout<<wb<<endl;

    cout<<wb.find("65")<<endl;//to find is a substring exist or not

    wb.insert(5,"69");//inserting a string diff from appending at the end 
    cout<<wb<<endl;

    cout<<wb.size()<<endl;
    cout<<wb.length()<<endl;//for length

    string s=wb.substr(6,7);
    cout<<s<<endl;//to generate a substring

    int x=108;
    cout<<to_string(x)+"2"<<endl;//to convert a int into string

    sort(wb.begin(),wb.end());
    cout<<wb<<endl;*/

    string str="ddUGIsabasBkAX";//CONVERTING all lover case to uooer case
    for(int i=0;i<str.size();i++){
      if(str[i]>='a' && str[i]<='z'){
        str[i]-=32;
      }
    }
    cout<<str<<endl;

    for(int i=0;i<str.size();i++){
      if(str[i]>='A' && str[i]<='Z'){
        str[i]+=32;
      }
    }
    cout<<str<<endl;

    //inbuilt function;
    string st="asgsacjejJGgO";
    transform(st.begin(),st.end(),st.begin(),::toupper);
    cout<<st<<endl;
    transform(st.begin(),st.end(),st.begin(),::tolower);
    cout<<st<<endl;

    //from the biggest number from the nummeric string
    string s="4964646682";

    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;

    //max frequency of char
    s="cdunooubvououbaswc";
    int freq[26];
    for(int i=0;i<26;i++){
      freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
      freq[s[i]-'a']++;

    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++){
      if(freq[i]>maxf){
        maxf=freq[i];
        ans=i+'a';

      }
    }
    cout<<maxf<<" "<<ans<<endl;
    return 0;
 }