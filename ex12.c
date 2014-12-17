#include <stdio.h>

void print_arguments(int argc, char *argv[]) {
  printf("Here are your arguments:\n");

  for(int i = 1; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  if(argc == 1) {
    printf("You have no arguments.\n");
  } else if (argc > 1 && argc < 4) {
    print_arguments(argc, argv);
  } else {
    printf("You have too many arguments. You suck.\n");
  }

  return 0;
}
