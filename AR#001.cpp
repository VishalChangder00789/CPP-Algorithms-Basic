/*
    Sample Input  :  copy and paste the below input for the 2D array input.
    /// we can also directly cin the characters and check the given strength in the real time scenario.
.
.
*
.
.
#
.
.
*
*
.
.
.
#
*
*

    Problem : Piyush and Magical park.
    statement :
        The user needs to find out if Piyush can escape the given grid special characters which affect them in some
        way or the other. while keeping in mind that his minimum threshold must be intact for a succesfull escape.
        Piyush can only move row wise from left to right (i.e every time he hits the last coloumn of  some m row
        , he needs to go to the first coloumn of next row to start again.)


        2D grid with mxn state, K amount of minimum threshold strength. Initial strength S

        There are special characters 
        . , *  # 

        if piyush encounters . , then his strength deducts by -2 
        if piyush encounters # , then he is blocked (he cannot go any further in that row so the row must be changed)
        if piyush encounters * , then strength increases +5

        NOTE : Piyush does require 1 strength for each row traversal.
        While changing the row he will not loose any strength.


        We need to compute if he can pass the grid with remaining strength K or not.



        laterEdit : i have found out in the solution that at each row the traversal is only succesfull if the s>=k

*/
#include<iostream>
#include<string>

bool magicalPark(char arr[][20], int m , int n, int k, int s){

    const int minimumStrength=k;
    int givenStrength=s;
    bool success=true;

    ///loop for row wise traversal.

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            ///for the later realisation part.
            /// the next loop will only begin when the previous loop conditions are satified.
            if(givenStrength<minimumStrength){
                success=false;
                break;
            }

            ///plus the checks
            if(arr[i][j]=='.'){
                givenStrength-=2;
            }
            
            if(arr[i][j]=='#'){
                break;
            }
            
            if(arr[i][j]=='*'){
                givenStrength+=5;
            }


            // Remember to always check for the coloumns and rows in 2D array 
            // as they are being alotted with more memory than required :
            // as a part of stack allocation scheme.
            if(j!=n-1){
                /*Previously i was doing this before the for loop starts but the problem statement clearly says 
                    for the first [row][coloumn] it does not deduct any points.*/
                givenStrength--;
            }

        }
            

    }

    /// when the loop ends if the given strength = minimumstrength or greater.
    /// return true.
    /// else false.
    if(givenStrength>=minimumStrength){
        std::cout<<givenStrength;
        return true;
    }else{
        return false;
    }
}


int main(){
    ///  compiler working check :
    char arr[20][20]={0};
    int m,n,k,s;
    std::cout<<"Enter the value of m and n"<<std::endl;
    std::cin>>m>>n;
    std::cout<<"Enter the minimum strength"<<std::endl;
    std::cin>>k;
    std::cout<<"Enter the current strength"<<std::endl;
    std::cin>>s;

    ///Taking the character input

    std::cout<<"Character Input : "<<std::endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cin>>arr[i][j];
        }
    }

    bool result=magicalPark(arr,m,n,k,s);
    if(result==1){
        std::cout<<" YES"<<std::endl;
    }else{
        std::cout<<" NO"<<std::endl;
    }
}