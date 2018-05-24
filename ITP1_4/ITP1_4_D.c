#include <stdio.h>

int main(){
    int n;
    int i;
    long min = 2147483647;
    long max = -2147483648;
    long sum = 0;
    int input;

    scanf("%d", &n);
    
    
    for (i = 0;i < n;i++){
        scanf("%d",  &input);
    
        if(input < min){
            min = input;
        }
    
        if(input > max){
            max = input;
        }
    
        sum += input;
    }
    
    printf("%ld %ld %ld\n", min, max, sum);
    
    return 0;
}
