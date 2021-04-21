///given : target element
///use two pointers to create sum and return the index of the array elements as well as the elements.
#include<iostream>
#include<vector>

int main(){

    int arr[]={1,3,5,7,10,11,12,13};//7
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;

    std::cout<<"Enter the target sum to find"<<std::endl;
    std::cin>>target;

    int low=0,high=n-1;

    while(low<high){    
        int currentSum=arr[low]+arr[high];
        if(currentSum>target){
            high--;
        }else if(currentSum<target){
            low++;
        }else if(currentSum==target){
            std::cout<<"Found"<<std::endl;
            std::cout<<arr[low]<<" and "<<arr[high];
            std::cout<<low<<"  "<<high;
            std::cout<<std::endl;
            low++;
            high--;
        }
        
    }


}