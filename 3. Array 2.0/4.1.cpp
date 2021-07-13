
#include<iostream>
#include<cstring>

using namespace std;

char *mystrtok(char str[],char deli){
    static char *input=NULL;
    if(str!='\0'){
        input=str;
    }

    char *output=new char[strlen(input)+1];
    int i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]!=deli){
            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input=input+i+1;
            return output;
        }

    }
    output[i]='\0';
    input=NULL;
    return output;

}

int main(){
   char str[]="Hello, I am Ankit Kumar";
   char *ptr=mystrtok(str,' ');
   while(ptr!=NULL){
     cout<<ptr<<endl;
     ptr=mystrtok(NULL,' ');
   }

   return 0;
  }
