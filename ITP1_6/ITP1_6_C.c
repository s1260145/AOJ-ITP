#include <stdio.h>

int main(){
    int n, b, f, r, v;
    int i, j;
    
    int info[12][10];
    for(i = 0; i < 12;i++)
        for(j = 0; j < 10;j++)
            info[i][j] = 0;
    
    scanf("%d", &n);
    for(i = 0;i < n;i++){
        scanf("%d%d%d%d", &b, &f, &r, &v);
        info[(b-1)*3+(f-1)][r-1] = info[(b-1)*3+(f-1)][r-1] + v;
    }
    
    for(i = 0;i < 12;i++){
        for(j = 0; j < 10; j++){
            printf(" %d", info[i][j]);
        }
        if((i+1) % 3 == 0 && i != 11) printf("\n####################");
        printf("\n");
    }
    return 0;
}
