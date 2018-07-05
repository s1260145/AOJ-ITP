#include <stdio.h>
#include <string.h>

int main(){
  char str[1000];
  int num[1000];
  int sum[1000];
  int i = 0, j = 0, k = 0;

  while(1){
    scanf("%s", str);
    if(!strcmp(str, "0")) break;
    for(j = 0;j < strlen(str); j++){
      for(i = 0;i < 10;i++){
	if(str[j] == 48 + i){
	  num[j] = i;
	}
      }
      sum[k] += num[j];
    }
    k++;
  }
  for(i = 0;i < k;i++){
    printf("%d\n", sum[i]);
  }
  
  return 0;
}
