#include <stdio.h>

int main()
{
  int H,W;
  int i,j;
    
  int plus = 0;

  while(1){
    scanf("%d %d", &H, &W);

    if(W%2 == 1){
      plus = 1;
    }
	
    if(H == 0&& W ==0){
      break;
    }
    for(i =0;i<H;i++){
      if(W == 1){
	if(i%2 == 0){
	  printf("#");
	}else{
	  printf(".");
	}

      }

      
      for(j=0;j<W/2;j++){
	if(i%2 == 1 && j == 0){
	  printf(".");
	}
	      
	printf("#");
	if(j != W/2 - 1){
	  printf(".");
	}
	if(plus == 1){
	  if(j == W/2-1){
	    printf(".");
	  }
	}
	if(i%2 == 0 && j == W/2 -1){
	  if(W%2 == 0){
	    printf(".");
	  }else{
	    printf("#");
	  }
	}
      }
      printf("\n");
    }
    printf("\n");
    plus = 0;
  }
  return 0;
}
