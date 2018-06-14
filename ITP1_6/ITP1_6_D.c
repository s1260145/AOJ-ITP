#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    
    int a[n][m];
    int b[m];
    
    int i, j;
    int c[n];

    //Input A
    for(i = 0;i<n;i++){
        for(j = 0;j < m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    //Input B
    for(j = 0;j < m;j++){
            scanf("%d", &b[j]);
        }

    for(i = 0;i < n;i++){
      c[i] = 0;
    }

    
    for(i = 0;i<n;i++){
        for(j = 0;j < m;j++){
	  c[i] += a[i][j]*b[j];
        }
    }
    
    for(i = 0;i < n;i++){
        printf("%d\n", c[i]);
    }
    
    
    return 0;
}
