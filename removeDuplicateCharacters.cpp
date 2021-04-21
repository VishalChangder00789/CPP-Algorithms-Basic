///The problem statement so arises is to remove the consecutive duplicates
////There is a different method which contains copying the different element in place of duplicate character.
/// which would give us an illusion that the duplicate words are removed and the non duplicate words are push 
/// to the left side
#include<iostream>
#include<cstring>
#include<vector>

void removeDuplicates(char arr[]){
    
    std::vector<char>arrc;
    int length=strlen(arr);
    int i=1;

    char a=arr[0];
    arrc.push_back(a);


    while(i!=length){
        if(arr[i]==a){
            i++;
        }else{
            a=arr[i];
            arrc.push_back(a);
        }
    }

    for(char i:arrc){
        std::cout<<i<<" ";
    }
}

int main(){

    char a[1000];
    std::cin.getline(a,1000);
    removeDuplicates(a);
}