//Solution to the attached question 
#include "stdio.h"

void main (){
int n;
printf("enter any no from 1 to 10 : \n");
scanf("%d",&n);

if(n%2 == 0){
n=n-1;
}

for(int i = 1 ;i <= n/2+1; i++){

  for(int j = 1; j<i; j++){
     printf(" ");
  }
  for(int j =1 ;j<=n-(i-1)*2;j++){
     printf("%d",i);
  }
 printf("\n");

}

for(int i=n/2;i>=1;i--){
    for(int j = 1; j<i; j++){
     printf(" ");
    }
    for(int j =1 ;j<=n-(i-1)*2;j++){
     printf("%d",n-i+1);
    }
    printf("\n");
}
return 0;
}

