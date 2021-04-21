/////traverse an array using in a wave pattern
#include<iostream>
#include<string>

using namespace std;

int main(){

    int arr[5][5];
    int value=1;

    ///Row wise traversing
    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=value;
            value+=1;
        }
        cout<<endl;
    }

    ///wave traversing
    for(int j=0;j<5;j++){

        if(j%2==0){
            ///top down traversal
            for(int i=0;i<5;i++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }else{
            //bottom up traversal
            for(int i=4;i>=0;i--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }


    ///spiral traversal.


    cout<<endl;


}