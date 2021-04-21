////Incompplete : 
/// Problem : When you allot more space that the decided space due to stack allocation schema , control is printing all 
/// the empty portions too.
/// eventually printing all the elements in the incorrect order./


#include<iostream>
#include<string>


void print2DSpiral(int arr[][100],int m, int n){
    
    int startRow=0;
    int startCol=0;

    int endRow=m-1;
    int endCol=n-1;

    while(startRow<=endRow && startCol<=endCol){

        ///printing the first Row
        for(int i=startCol;i<=endCol;i++){
            std::cout<<arr[startRow][i]<<" ";
        }
        std::cout<<std::endl;
        startRow++;

        ///printing the last coloumn
        for(int i=startRow;i<=endRow;i++){
            std::cout<<arr[i][endCol]<<" ";
        }
        std::cout<<std::endl;
        endCol--;

        ///printing the last row
        for(int i=endCol;i>=startCol;i--){
            std::cout<<arr[endRow][i]<<" ";
        }
        std::cout<<std::endl;
        endRow--;

        ///printing the first remaining
        for(int i=endRow;i>=startRow;i++){
            std::cout<<arr[i][startCol]<<" ";
        }
        std::cout<<std::endl;
        startCol++; 
    }
}


int main(){

    int arr[100][100]={0};
    int m,n;
    std::cout<<"Enter the value of m and n"<<std::endl;
    std::cin>>m>>n;

    ///iterate over the arrays 
    int val=1;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            arr[row][col]=val;
            val=val+1;
            std::cout<<arr[row][col]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<std::endl;

    print2DSpiral(arr,m,n);


}