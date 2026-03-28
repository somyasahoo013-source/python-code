/* #include<stdio.h>
#include<string.h>

int main(){
    char password[]="somya";
    char pass[100];
    printf("enter the password : ");
    scanf("%s",pass);
    if(strcmp(pass, password) == 0){
        printf("welcome welcome mother fucker");
    }
    else{
        printf("madarchod sahi password dall");
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main(){

char name[500],rev[500];
gets(name);

int len=strlen(name);
int a=len-1;
int i;

for(i=0;name[i]!='\0';i++){
    rev[i]=name[a];
    a--;
}
rev[i]='\0';

if(strcmp(name,rev)==0){
    printf("palindrom");
}else{
    printf("not");
}

    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>
// check a string is pallindrum or not
int main(){
    char str[100],rev[100],temp[2];
    gets(str);
    rev[0]='\0';
    int i=0;
    int b= strlen(str)-1;
    while(b>=0){
        temp[0]=str[b];
        temp[1]='\0';
        strcat(rev,temp);
        b--;

    }
    if(strcmp(str,rev)==0){
        printf("palindrom");
    }
    else{
        printf("not");
    }

     
    return 0;
} */

/* #include <stdio.h>
#include<string.h>
 // remove blank spaces from string

int main() {
    char name[100];
    gets(name);
    int a=strlen(name);
    for(int i=0;i<=a;i++){
        if(name[i]==' '){
            for(int j=i;j<=a;j++){
                name[j]=name[j+1];
            }
        }

    }
    puts(name);
     

    return 0;
}
 */

 /* #include <stdio.h>
#include<string.h>
//count no. of characters excluding blank spaces

void count(char str[]);

int main() {
     char name[100];
     gets(name);
     count(name);
     

    return 0;
}

void count(char str[]){
    int count=0;
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
           continue;
        }
         count++;
    }
    printf("%d",count);
}  */

#include<stdio.h>
#include<string.h>

int main(){
    char name[]=" somya ranjan sahoo ";
    /* int len = strlen(name);
    int count=0,idx=0;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            idx=i;   
        }
    }
    for(int i=idx;name[i]!='\0';i++){
        count++;
        
    }
    count-=1;
     
    printf("%d",count); 
    
    return 0;
}
    */

/* #include<stdio.h>
#include<string.h>

int main(){
    char name[]=" somya ranjan sahoo ";
    strrev(name);
    int idx=0,count=0;
    for(int i=0;name[i]==' ';i++){
        idx++;
    }
    for(int i=idx;name[i]!=' ';i++){
        count++;
    }
    printf("tne number of last digit : %d",count);
     
    return 0;
} */