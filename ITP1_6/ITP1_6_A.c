#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m = n;
    int a[n];
    int j;
    
    for(j = 0;j < n;j++){
        scanf("%d", &a[j]);
    }
    
    for(j=0;j < m;j++){
        printf("%d", a[n-1] );
	if(m-j != 1){
	  printf(" ");
	}
        n--;
    }
    printf("\n");

    return 0;
}
