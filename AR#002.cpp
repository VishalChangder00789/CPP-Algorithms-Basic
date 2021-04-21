/* quick edit :
    error : 0 is getting included somehow. needs a dry run.

    quick edit 2 :
    solution : turns out to be. if we input the 2D array then it works just fine.
    code for the same is highlited with comments large chunk.

   Statement : Rotation of an image.

    An image has a backend data structure of a 2D matrix.

    Problem : We need to rotate a 2D matrix anti-clockwise(just the transpose will get that result.).
    Use of transpose matrix is required.
    Reversing the array elements are required.
    We will be using the swapping fucntion in algorithms

    Assume the 2D matrix is of the size nxn. i.e the image has equal dimensions.

    Quick fact : 
    Just the transpose of the matrix that is exchanging the upper triangular matrix and lower triangular matrix will be providing the
    rotation towards -90 degrees

    if we reverse the matrix and doing the transpose will get the +90 degrees rotation.

*/

#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[][20], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
}

/// taking the help of STL c++ to achieve the solution to the problem statement.

void rotationusingSTL(int arr[][20], int n){

    ///to rotate the 2D matrix using stl rotate
    for(int i=0;i<n;i++){

        /*here arr[i] is the starting index of the array taken as a single array traversing till the end.
            we have a control, i.e till which index we want to reverse the array.*/
        reverse(arr[i],arr[i]+n);
    }

    ///and the transpose method is same as before
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}




///rotation towards the clockwise direction.
void rotateMatrix(int arr[][20], int n){

    // reversing of all the rows of matrix is done.
        /*
            Mechanism :
                        pointing to each element at opposite ends of the row.
                        both are swapped.
                        
        */
    for(int i=0;i<n;i++){
        ///traversing row wise 
        int startcol=0;
        int endcol=n-1;

        while(startcol<endcol){
            //swapping the first element with the last element and closing down the array until the start pointer and the end pointer comes close.
            swap(arr[i][startcol],arr[i][endcol]);
            startcol++;
            endcol--;
        }

    }

    printArray(arr,n);
    cout<<endl;
    cout<<endl;


    //  Taking the transpose of the matrix.

    /*
        Transpose of the matrix is said as : 
        Row and coloumn gets reversed with their roles.
        Rows becomes coloumns and coloumns becomes rows.
    */

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            /*  
                when we observe the 2D matrix we can say that lets say a 4X4 matrix is taken then, the below condition only satisfies with
                the above part of the array i.e the upper triangular matrix of the array. and swapping it with its opposite side will give
                us the rotated array.

                for eg. a[i][j] --> a[j][i].
                
                */
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}
int main(){


    cout<<"Hello"<<endl;
    
    int arr[20][20];
    int n;

    ///  Input the value of n.
    cout<<"Enter the values for n"<<endl;
    cin>>n;

    int val=0;
    
    ///take input via user.
    ///-------------------uncomment by doing 
        //1. highlight the code.
        //2. Press ctrl+k+u on vscode.


                            // for(int i=0;i<n;i++){
                            //     for(int j=0;j<n;j++){
                            //         cin>>arr[i][j];
                            //     }
                            // }




    ///input and output the array at the same time.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=val;
            val++;
            cout<<val<<"   ";
        }
         cout<<endl;

    }
    
    
    cout<<endl;
    cout<<endl;
    cout<<endl;


    rotateMatrix(arr,n);
    printArray(arr,n);  

    return 0;
}