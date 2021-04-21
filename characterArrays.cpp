////Creating a space in geeksforgeeks using character array;
/// character arrays are bad at inpuyt string with blank spaces

#include<iostream>
#include<vector>


int main(){

    char a[100];
    ///to directly input the string in character array we can directly cin inside it
    std::cout<<"Enter a string without blanks space"<<std::endl;
    ///We can input an array like this and this looks fun.
    std::cin>>a;
    std::cout<<a;
    std::cout<<std::endl;

    char ab[]={'a','b','c','d','e','f'};
    std::cout<<ab;

    ///returns the adress of the first element of the array : case only for integers.
    int arr[]={1,2,3,4,5,56,7,8,9};
    std::cout<<arr<<std::endl;

    char b[]={'h','e','l','l','o'};//this should give the size 5
    ///Character arrays instantiated like this likely contain a termination character thus making the size of 
    // character array +1.
    char c[]="hello"; //this should give the size 6

    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<sizeof(b)<<std::endl;
    std::cout<<sizeof(c)<<std::endl;



}