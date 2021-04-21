///using kadane's algorithm 
///As proposed by Kandane it can generate the maximum sum in single for loop iteration 

#include<iostream>
#include<vector>

int maxSumSub(int arr[], int n){
    int currentSum=0;
    int maxSum=0;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(arr[i]+currentSum<0){
                currentSum+=0;
            }else if(arr[i]+currentSum>0){
                currentSum+=arr[i];
            }

            if(currentSum>maxSum){
                maxSum=currentSum;
            }
        }else{
            currentSum+=arr[i];
             if(currentSum>maxSum){
                maxSum=currentSum;
            }
        }
    }
   return maxSum;   
}
int main(){

    int arr[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
    //int arr[]={-4,1,3,-2,6,2,-1,-4,-7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int result=maxSumSub(arr,n);
    std::cout<<result;
}