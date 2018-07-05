#include<stdio.h>
#include<string.h>
 
int main(void){
 
  int i;
 
  char str[1200];
 
  scanf(" %[^\n]", str);
  for(i=0;i<1200;i++){
    if(str[i]>=97&&str[i]<=122)
      str[i]=str[i]-32;
    else if(str[i] >= 65 && str[i] <= 90)
      str[i]=str[i]+32;
  }
  printf("%s\n", str);
 
  return 0;
}
