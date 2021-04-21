#include<iostream>
#include<string>
#include<cstring>

using namespace std;


char* mystrtok(char* str, char delim){

        ////initialising an input character array pointer.
        static char* input=NULL;

        if(str!=NULL){
                input=str;
        }

        if(input==NULL){
                return NULL;
        }
        
        char* output= new char[strlen(input)+1];

        int i=0;
        for(;input[i]!='\0';i++){
                if(input[i]!=delim){
                        output[i]=input[i];
                }else{
                        output[i]='\0';
                        input=input+i+1;
                        return output;
                }
        }

        //// base + corner case 
        output[i]='\0';
        input=NULL;
        return output; 

}
int main(){

        char s[100]="Today is the day i learn static";

        char* pointer=mystrtok(s, ' ');
        cout<<pointer<<endl;
        while(pointer!=NULL){
                pointer=mystrtok(NULL,' ');
                cout<<pointer<<endl;    
        }

        return 0;
}