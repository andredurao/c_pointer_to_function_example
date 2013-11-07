nclude <stdio.h>
#include <stdlib.h>

typedef void(*functiontype)(int);

void even(int x) {
  printf("EVEN %d \n", x);
}

void odd(int x) {
  printf("ODD %d \n", x);
}

void odd_or_even(int x){
  functiontype even_ref = &even;
  functiontype odd_ref = &odd;
  if(x%2 == 0){
    even_ref(x);
  }else{
    odd_ref(x);
  }
}

int main(int argc, char** argv) {
  odd_or_even(10);
  return (EXIT_SUCCESS);
}


