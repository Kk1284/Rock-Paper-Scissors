#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n){
srand(time(NULL));
return rand()%n;
}
int greater(char char1,char char2){
  if(char1==char2){
    return -1;
    }
  if((char1 =='r')&&(char2 =='s')){
     return 1;
   }
  else if((char2 =='r')&&(char1 =='s')){
     return 0;  
   }
   if((char1 =='p')&&(char2 =='r')){
     return 1;
   }
  else if((char2 =='p')&&(char1 =='r')){
     return 0;  
   }
   if((char1 =='s')&&(char2 =='p')){
     return 1;
   }
  else if((char2 =='s')&&(char1 =='p')){
     return 0;  
   }
}

int main(){
int playerscore=0,compscore= 0,temp;
char playerchar,compchar;
char dict[]={'r','p','s'};
printf("Welcome to the Rock, Paper,Scissors.\n");

for(int i=0;i<3;i++){

printf("Player 1's Turn:\n"); 
printf("Choose 1 for rock, 2 for paper and 3 for scissirs\n");
printf("Jaldi kar subh panvel nikalna hai!\n");
scanf("%d",&temp); 
getchar();
playerchar=dict[temp-1];
printf("You choose %c\n",playerchar);

printf("Computer's Turn:\n"); 
printf("Choose 1 for rock, 2 for paper and 3 for scissirs\n");
temp=generaterandomnumber(3) +1;
compchar=dict[temp-1];
printf("CPU choose %c\n",compchar);

if(greater(compchar,playerchar)==1){
 compscore+=1;
 printf("CPU got it:\n");
} 
else if(greater(compchar,playerchar)==-1){
 compscore+=1;
 playerscore+=1;
 printf("Draw ho gya , mza ni aya!\n");
}
else{
 playerscore+=1;
 printf("Bade harami ho beta!\n") ;
} 
}  
if(playerscore>compscore)
{
  printf("YOU WIN\n");
}
else if(playerscore<compscore)
{
  printf("CPU WIN, SORRY DARLING!\n");
}
else
{
  printf("IT IS A DRAW\n");
}
return 0;
}
