#include<stdio.h>

int main(){
     char player1,player2;
     int target,p1=0,p2=0;
     printf("enter stone = s , paper = p , scisoor = k\n");
     printf("enter the number of rounds :");
     scanf("%d",&target);
    for(int i=1;i<=target;i++){

        printf("\nround %d\n",i);

        printf("player 1 :");
        scanf(" %c",&player1);

        printf("player 2 :");
        scanf(" %c",&player2);

        if(player1!='s' && player1!='p' && player1!='k'){
            printf("\nwrong input so game ends here\n");
            break;
        }
        if(player2!='s' && player2!='p' && player2!='k'){
            printf("\nwrong input so game ends here\n");
            break;
        }
        if(player1==player2){
            printf("draw this round\n"); 
           }
        if(player1=='s' && player2=='p'){
            printf("player 2 wins this round\n");
            p2++;
           }
        if(player1=='s' && player2=='k'){
            printf("player 1 wins this round\n");
            p1++;
           }
        if(player1=='p' && player2=='s'){
            printf("player 1 wins this round\n");
            p1++;
           }
        if(player1=='p' && player2=='k'){
            printf("player 2 wins this round\n");
            p2++;
           }
        if(player1=='k' && player2=='s'){
            printf("player 2 wins this round\n");
            p2++;
           }
        if(player1=='k' && player2=='p'){
            printf("player 1 wins this round\n");
            p1++;
           }
    }
    printf("\nfinal scores \n player 1 :%d \n player 2 :%d\n",p1,p2);
    if(p1>p2){
        printf("\nplayer 1 wins\n");
    }
    else if(p1==p2){
        printf("\ndraw\n");
    }
    else{
        printf("\nplayer 2 wins\n");
    }
    return 0;
}