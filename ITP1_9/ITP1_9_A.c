#include <stdio.h>
#include <string.h>

void ChangeLetter(char *str);
  
int main(){
  char W[10];
  char T[1000];
  char eof[] = {"END_OF_TEXT"};
  int count = 0;
  
  scanf("%s", W);
  ChangeLetter(W);

  while(1){
    scanf("%s", T);
    if(strcmp(T,eof ) == 0) break;
    ChangeLetter(T);
    if(strcmp(T, W) == 0) count++;
  }

  printf("%d\n", count);

  return 0;
}

void ChangeLetter(char *str){
  int i;
  for(i = 0;i < strlen(str);i++){
    if('a' <= str[i] && str[i] <= 'z'){
      str[i] -= 32;//全て大文字に変換
    }
  }
}
