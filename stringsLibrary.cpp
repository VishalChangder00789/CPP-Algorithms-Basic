//// Introduction to string class.

#include<iostream>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

int findWordindex(string stringTobePassed, string wordTobeFound){

    for(int i=0;i<stringTobePassed.length();i++){
        if(stringTobePassed[i]==wordTobeFound[0]){
            return i;
        }
    }
    return 0;
}

int main(){
    std::cout<<"Hello world !! "<<std::endl;

    ///way to declare a null string
    string nullString;

    ///ways to declare a string
    string a("Hello this is a string");
    string b="Hello this is another string";

    ///ways to copy a string and store it another string using copy constructor.
    string c(b); ///c also contains the b' copy.
    c=c+"This is a copy of b";
    string d=a;/// d contains a's copy
    d=d+"This is a copy of a";

    ///use character array and store it into a string. it is an interchangeable container.
    char ch[]={'a','b','c','d','\0'};
    string ch_copy=ch;
    ch_copy+="This is a copy of ch";

    ////printing output for each.

    cout<<nullString<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<ch<<endl;
    cout<<ch_copy<<endl;


    ////How to check if the string is empty ?
    if(nullString.empty()){
        cout<<"The string is empty"<<endl;
    }else{
        cout<<"The string contains : "<<endl;
        cout<<nullString<<endl;
    }

    string ex1="This is a string";
    string ex2="This is a string to append";

    ///ways to append a string to another.

    ex1.append(" "+ex2);
    cout<<ex1<<endl;

    string ex3="This is second string";
    string ex4="This is second string to append";

    ex3=ex3+" "+ex4;
    cout<<ex3<<endl;

    string ex5="This is a new example string to erased";

    ///Clearing a string. or emptying  a string
    cout<<ex5.length()<<endl;;
    ex5.clear();
    cout<<ex5.length()<<endl;

    ///Comparing two string .
    ///       a.compare(b)   return <0,=0,>0;
    /// this function comapares lexical values.    (i need to see this)
    //// lexiograhic comparision tells the user that which word will occur in the dictionary first.
    /// in this case apple will occur first then mango as well as capital letters are given the precedence.

    string ex6="apple";
    string ex7="Mango";

    cout<<ex7.compare(ex6)<<endl;

    ////How to find a substring in a string.
    ///this will be returning an index value of the word we want to find.
    string ex8="Find a word in this string which is Mango and this string cotinues with more words ahead.";
    int index=ex8.find("Mango");


    ///to make it understandable
    int j=findWordindex(ex8,"Mango");

    cout<<index<<endl;
    cout<<j<<endl;



    ////Remove a word from string.
    ///we need to remove a word from the string ex8 which is Mango.
    string word="Mango";
    int len=word.length();

    /// to the erase method we need to pass a index and a number till which you want to remove, in this case the length of the string MANGO.
    ex8.erase(index,len+1);
    cout<<ex8<<endl;


    ///iterate over the string
    string ex9="This is a string that needs to be printed character by character";

    for(int i=0;i<ex9.length();i++){
        cout<<ex9[i];
    }
    cout<<endl;

    string temp="This is a temporary string which needs to be iterated";


    ///another way to iterate over a string is through iterators
    /// iterators are the only perfect pointers through which you can iterate over a container.
    

    /// C++ has seperated its traditional usage as well as Modern usage
    /// we can use two types of pointers , the old ones and the iterators.
    /// traditional pointers only work with older form of data structures.
    /// the iterators are specially designed to be used by containers be it vector, string, list, forward list, pairs etc.

    /// to define an iterator we use'
        string::iterator it;
        vector<int>::iterator it2;
        
    for(auto it=temp.begin();it<temp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    ////Learning the curve of for each loop 
    /// we can add the data type in place of auto but auto works just fine with standards of c++11
    //// this is the foreach loop.
    for(auto i:temp){
        cout<<i<<" ";
    }
}