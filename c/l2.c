#include<stdio.h>

void p1(char c){
  printf("%c\n", c);
}

int p2(int x,int y){
  return x + y;
}
int main(){
  char c = 'a';
  int x,y,z;
  x = 1;
  y = 2;
  p1(c);
  z = p2(x,y);
  printf("%d + %d = %d\n",x,y,z);
}
