//checking whether a floating number or not
#include <stdio.h>
#define N 1000
int main()
{
char num[N];
printf("Enter the number: ");
scanf("%s",num);
int i=0,a1=0,a2=0;

 while(num[i]>='\0'){
 if(((num[i]-'0')>=0&&(num[i]-'0')<=9)||((num[i])=='.'))
 {
 if(num[i]=='.'){
  a1+=1;
 if(((num[i+1])>='0'&&(num[i+1])<='9')){
  if(num[i+1]!='\0'){
   a2=1;
  }
}
 }
 }

 i++;
}
if(a1==1&&a2==1){
 printf("it is floating number. ");
}
else 
printf("it is not a floating number.");
    return 0;
}
