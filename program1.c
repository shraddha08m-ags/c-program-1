#include<stdio.h>
int main(){
int number;
printf("enter a number:");
scanf("%d", &number);
if(number %2==0){
printf("%d is even\n",number);
}else{
printf("%dis odd\n",number);
}
return 0;
}
