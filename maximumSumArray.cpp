///Finding maximum sum of subarray using constant formulae with O(n^2).
#include<iostream>
#include<vector>

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int maxSumSubArray(int arr[], int n, int cs[]){
    int maxSum=0;
    int left;
    int right;

    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            int currentSum=0;
            currentSum=cs[j]-cs[i-1];

            if(currentSum>maxSum){
                maxSum=currentSum;
                left=i;
                right=j;
                
            }
        }
    }


    std::cout<<"The series with maximum sum is : "<<std::endl;
    for(int i=left;i<=right;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    return maxSum;

}
int main(){
    int arr[]={-4,1,3,-2,6,2,-1,-4,-7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    std::cout<<"Designated Array : "<<std::endl;
    printArray(arr,n);
    ///taking heap memory
    int* cs= new int[n];
    cs[0]=arr[0];


    ///Building the cumlative sum array
    for(int i=1;i<n;i++){
        cs[i]=cs[i-1]+arr[i];
    }

    std::cout<<"The Cummulative Array : "<<std::endl;
    printArray(cs,n);    

    int result=maxSumSubArray(arr,n,cs);
    std::cout<<"The maximum Sum of above sub array is : "<<result;
}