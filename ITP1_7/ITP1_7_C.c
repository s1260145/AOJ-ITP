#include <stdio.h>

int main(){
  int r, c;
  scanf("%d %d", &r, &c);

  int x[r][c];
  int sum = 0;
  int sum_sum = 0;

  
  int i, j;

 
  
  for(i = 0;i < r;i++){
    for(j = 0;j < c;j++){
      scanf("%d", &x[i][j]);
    }
  }

  for(i = 0;i < r;i++){
    for(j = 0;j < c;j++){
      printf("%d ", x[i][j]);
      sum += x[i][j];
      
      if(c-j == 1){
	printf("%d", sum);
	sum = 0;
      }
    }
    printf("\n");
  }

  for(j = 0;j < c;j++){
    for(i = 0;i < r;i++){
      sum += x[i][j];
    }
    printf("%d ", sum);
    sum_sum += sum;
    sum = 0;
  }

  printf("%d\n", sum_sum);
  
  return 0;
}
