#include <stdio.h>

int main() {
    /*
 char suj[50]="bonjour tout le monde";
 char ch1[10]="jour";
 char ch2[10]="soir";
  int i,j,k;
 for(i=0;suj[i];i++){
   if(suj[i]==ch1[0]){
    for (j= 1; ch1[j] && suj[i+j]==ch1[j];j++)
    if (ch1[j]=='\0') {
        for (k=0; ch2[k];k++)
        suj[i+k]=ch2[k];
    }}
    break;
 }
    printf("%s",suj);
   
  return 0;
  */

 char suj[50]="bonjour tout le monde";
 char ch1[10]="jour";
  char ch2[10]="soir";
  int i,j;
 for(i=0;suj[i];i++){
   if(suj[i]==ch1[0]){
     for(j = 1; ch1[j] && (suj[i+j] == ch1[j]); j++);
     if(ch1[j]=='\0')/*if(!ch1[j])*/{
     int k;
     for(k=0;ch2[k];k++)
       suj[i+k]=ch2[k];
       //suj[i+k]=ch2[k];
       //suj[k]=ch2[k-i];
       //suj[k]=='\0';
  } 
     //++jour de aujourd'huit ne vas etre decaler et suprimer car i ne  change pas  donc la boucle vas reprendre! ++//
   }
 }
  printf("%s",suj);
  return 0;
}

