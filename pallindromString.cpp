///inputing a string and finding if the string is pallindrome.
/// use character array.
#include<iostream>
#include<vector>
#include<cstring>

///returns true if the sentence is pallindrome.
bool checkPallindrome(char arr[]){

    int i=0;
    int j=strlen(arr)-1;

    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }else{
            return 0;
            break;
        }
    }
    return 1;

}

int main(){
    
    char arr[1000];
    std::cin.getline(arr,1000);

    bool result=checkPallindrome(arr);
    if(result==1){
        std::cout<<"Yes"<<std::endl;
    }else{
        std::cout<<"No"<<std::endl;
    }
}