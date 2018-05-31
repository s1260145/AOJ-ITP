#include <stdio.h>

int main()
{
    int H,W;
    int i,j;
    
    while(1){
        scanf("%d %d", &H, &W);\
        if(H == 0&& W ==0){
            break;
        }
        for(i =0;i<H;i++){
            printf("#");
            for(j=0;j<W-2;j++){
                if(i ==0||H-i ==1){
                printf("#");
                }else{
                    printf(".");
                }
            }
            printf("#");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
