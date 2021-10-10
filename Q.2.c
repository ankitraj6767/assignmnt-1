//program for check email id is valid or not
#include<stdio.h>
int main(){
 char email[1000];
 printf("Enter email :");
 scanf("%s",email);
 int at=-1,dot=-1,check=0,count =0,i=0;
 while(email[i]!='\0'){
  if((email[i]>='a'&&email[i]<='z')||(email[i]>='A'&&email[i]<='Z')||(email[i]>='0'&&email[i]<='9')){
 check=1;
  }
  else if((email[i]=='.'|| email[i]=='@'||email[i]=='-'||email[i]=='_') &&(i!=0||email[i+1]!='\0')){
   check=1;
  }
  else{
   check=-1;
   break;
  }
  if(email[i]=='@'){
   count++;
   at=i;
  }
  if(count>1){
   check=-1;
   break;
  }
  if(email[i]=='.'){
   dot=i;
  }
  if(email[i]=='.'){
   if(email[i+1]==email[i]){
   check=-1;
   break;
   }
  }
  i++;
  
 }
 if(dot-at<2){
  check=-1;
 }
  if(check==1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
 
 
 return 0;
}