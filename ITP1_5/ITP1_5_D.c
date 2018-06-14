#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int i;
  
  for(i=3;i<=n;i++){

    
    if(i%3 == 0 || i%10 == 3 || i/10 == 3 || i/10%10 == 3 || i/100%10 == 3 || i/1000 == 3){
      printf(" %d",i);
    }
  }
  printf("\n");
  return 0;
}
