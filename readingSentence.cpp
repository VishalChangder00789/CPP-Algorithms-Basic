///Since it is already known that cin in a character array will not let the blank spaces to be read.
///How to input a sentence with a space contained.
/// cin.get() is used to do such tasks.
/// it will be taking in character by character.
#include<iostream>
#include<vector>

void readline(char a[], int maximumLength){
    
    int i=0;
    char ch=std::cin.get();
    while(ch!='\n'){
        a[i]=ch;
        i++;
        if(i==maximumLength-1){
            break;
        }
        ///reading next character from the buffer in backend.
        ch=std::cin.get(); 
    }

    a[i]='\0';
    return;
}

int main(){

    char a[1000];
    //readline(a,1000);
    std::cin.getline(a,1000,'$');
    std::cout<<a;
}
