 #include <stdio.h>
#include <stdlib.h>

int main()
{int n;
    int i=1;
    int a[10];
    while(i<=9){
      scanf("%d" ,&n);
      a[n]=(i%2)+1;
      if(a[1]==1){
        printf("X");
      }
      else if(a[1]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[2]==1){
        printf("X");
      }
      else if(a[2]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[3]==1){
        printf("X");
      }
      else if(a[3]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("\n");
       if(a[4]==1){
        printf("X");
      }
      else if(a[4]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[5]==1){
        printf("X");
      }
      else if(a[5]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[6]==1){
        printf("X");
      }
      else if(a[6]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("\n");
       if(a[7]==1){
        printf("X");
      }
      else if(a[7]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[8]==1){
        printf("X");
      }
      else if(a[8]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
      printf("|");
       if(a[9]==1){
        printf("X");
      }
      else if(a[9]==2){
        printf("O");
      }
      else
      {
          printf(" ");
      }
    i++;
    if((a[1]==a[4])&&(a[4]==a[7])&&(a[7]==1)){
     return 0;
    }
    if((a[1]==a[4])&&(a[4]==a[7])&&(a[7]==2)){
     return 0;
    }
    if((a[2]==a[5])&&(a[5]==a[8])&&(a[8]==1)){
     return 0;
    }
    if((a[2]==a[5])&&(a[5]==a[8])&&(a[8]==2)){
     return 0;
    }
    if((a[3]==a[6])&&(a[6]==a[9])&&(a[9]==1)){
     return 0;
    }
    if((a[3]==a[6])&&(a[6]==a[9])&&(a[9]==2)){
     return 0;
    }
    if((a[1]==a[5])&&(a[5]==a[9])&&(a[9]==1)){
     return 0;
    }
     if((a[1]==a[5])&&(a[5]==a[9])&&(a[9]==2)){
     return 0;
    }
    if((a[3]==a[5])&&(a[5]==a[7])&&(a[7]==1)){
     return 0;
    }
    if((a[3]==a[5])&&(a[5]==a[7])&&(a[7]==2)){
     return 0;
    }
 if((a[1]==a[2])&&(a[2]==a[3])&&(a[3]==1)){
     return 0;
    }
    if((a[1]==a[2])&&(a[2]==a[3])&&(a[3]==2)){
     return 0;
    }
    if((a[4]==a[5])&&(a[5]==a[6])&&(a[6]==1)){
     return 0;
    }
    if((a[4]==a[5])&&(a[5]==a[6])&&(a[6]==2)){
     return 0;
    }
    if((a[7]==a[8])&&(a[8]==a[9])&&(a[9]==1)){
     return 0;
    }
    if((a[7]==a[8])&&(a[8]==a[9])&&(a[9]==2)){
     return 0;
    }
    }
    return 0;
}
