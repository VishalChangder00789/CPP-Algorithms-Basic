///trick is to get the largest among N number of strings.
/// if we directly use the cin.getline(), it recognises the "Enter" or '\n' after entering the number of strings as an input empty string
//// therefore we will not be able to input suppose n sting , rather we will be inputting n-1 string.
/// to tackle this problem , the input buffer actually takes in '\n''string1''string2'. We need to skip the '\n' empty string
/// using cin.get().:
////cin.get() will be taking in the '\n' which shifts the input buffer 1 left and we get 3 input fire.



////blank spaces are also getting counted in the process of counting the length.
#include<iostream>
#include<cstring>

int main(){

    char arr[1000];
    char BiggestString[1000];

    int currentStringSize=0;
    int BiggestStringSize=0;
    int n;


    std::cin>>n;
    ///this will be skipping along the first character that i have inputted and make the input buffer free from '\n'
    std::cin.get();


    for(int i=0;i<n;i++){
        std::cout<<"Enter a string , You can add spaces too ! : "<<std::endl; 
        std::cin.getline(arr,1000);
        currentStringSize=strlen(arr);
        if(currentStringSize>BiggestStringSize){
            BiggestStringSize=currentStringSize;
            ////we also need to update the biggest string as the current string therefore we need to use the strcpy().
            strcpy(BiggestString,arr);
        }    
    }

    std::cout<<"The largest string is : "<<BiggestString<<std::endl;
    std::cout<<"The largest string size is : "<<BiggestStringSize;


    return 0;
}