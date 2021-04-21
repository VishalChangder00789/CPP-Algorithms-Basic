///// Take inuts of n number of string using a string array and then sort them according to their lexiography (Dictionary order)
//// Capital letter are given the precedence
//// Also design a fucntion that would sort the strings according to their length from smaller to larger.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string s, string s2){
    if(s.length()==s2.length()){
        return s<s2;
    }
    return s.length()<s2.length();
}
int main(){


    ////diagram 

    //---------------------------------------------------------------------------------------------------------------------------------------
    //|    FUIHSDIFIUHFSIUHFIAUSHFIUS       |   98fy8dg byfg efgygf yug                   |     wuygf yugfuygf          |       -----100
    //---------------------------------------------------------------------------------------------------------------------------------------


    ////Input n number of strings and sort them 
    int n;
    string s[100];

    cin>>n;

    /// to accept the '\n' before hand so that it does not hinder while we are taking the string input
    /// not doing this statement will accordingly make the input to n-1 as it takes a null string as input.
    cin.get();

    for(int i=0;i<n;i++){
        ///we learned 
        ///cin.getline(s,100); ///this is used to read a sentence from a given input with blank spaces in between for a character array.
        /// to input a sentence in string we use getline(cin,s[i]);
        getline(cin,s[i]);
    }


    /// then we output it 
    //// will be iterating over 100 times because , the size of the string array is 100
    // for(auto i :s){
    //     cout<<i<<endl;
    // }

    //// comparision on the basis of dictionary order on which string would appear first in the dictionary
    /// like a appears earlier than b

    ///call sort fucntion(on which ds u want to call, till when you want to call)
    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
}