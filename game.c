#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int i, h=0, t=0;
  char name[100];

  printf("Who are you?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  printf("Tossing a coin...\n");
  
  srand((unsigned int) time(NULL));
  for(i=0;i<3;i++){
    printf("Round %d: ", i+1);
    if(rand()%2 == 1){
      printf("Heads\n");
      h++;
    }
    else{
      printf("Tails\n");
      t++;
    }
  }

  printf("Heads: %d, Tails: %d\n", h, t);
  if(h>t) printf("%s won!\n", name);
  else printf("%s lost!\n", name);
  
  return 0;
}
