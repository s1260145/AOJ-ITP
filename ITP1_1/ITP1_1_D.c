#include <stdio.h>

int main (){
    int S;
    int h = 0, m =0, s = 0;
    
    scanf("%d", &S);

    
    while (S >= 3600){
        S -= 3600;
        h++;
    }

    while (S >= 60){
        S -=60;
        m++;
    }
    
    s = S;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
