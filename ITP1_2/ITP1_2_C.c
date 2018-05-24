#include <stdio.h>

int main(){
    int a, b, c;
    int s, m, d;   //小中大
    
    scanf("%d %d %d", &a, &b, &c );
    
    if(a >= b && a >= c){
        d = a;
        if(b >= c){
            m = b;
            s = c;
        }else{
            m = c;
            s = b;
        }
    }
      if(b >= a && b >= c){
        d = b;
        if(a >= c){
            m = a;
            s = c;
        }else{
            m = c;
            s = a;
        }
    }
    
     if(c >= a && c >= b){
        d = c;
        if(a >= b){
            m = a;
            s = b;
        }else{
            m = b;
            s = a;
        }
    }
    
    printf("%d %d %d\n", s, m, d);
    
    return 0;
}
