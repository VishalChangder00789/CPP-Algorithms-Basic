////introduction to 2D arrays.
#include<iostream>
#include<string>
#include<cstring>
using namespace std;


int main(){

    ///array initalised with 0 for all the elements
    int arr[5][5]={0};
    ////block of 25 memory

    for(int row=0;row<5;row++){
        for(int coloumn=0;coloumn<5;coloumn++){
            cout<<"Enter the element number : "<<row<<coloumn<<endl;
            cin>>arr[row][coloumn];
        }
        cout<<endl;
    }

    ////printing out array
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<"       ";
        }
        cout<<endl;
    }

}