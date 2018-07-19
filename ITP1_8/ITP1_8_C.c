#include <stdio.h>
#include <string.h>

#define ALPHABET 26

void zero(int *);

int main(){
  char moji[1201];
  int ans[ALPHABET];
  int i;
  

  zero(ans);

  scanf("%[^*]", moji);
  for(i=0; moji[i] != '\0'; ++i){
    if(moji[i] >= 65 && moji[i] <= 90)
      moji[i] += 32;
    ++ans[moji[i] - 'a'];
  }

  for(i = 0;i < ALPHABET; i++)
    printf("%c : %d\n",'a' + i ,ans[i]);
}

void zero(int *x){
  int *p = x;
  for(;p < x + ALPHABET;p++){
    *p = 0;
  }
}
