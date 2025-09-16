#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  // Uncomment this block to pass the first stage
  printf("$ ");

  // Wait for user input
  char input[100];
  fgets(input, 100, stdin);
  size_t input_len = strlen(input);
  if (input > 0 && input[input_len - 1] == '/n]') input[input_len - 1] = '\0';

  // Print the input
  printf("%s: command not found\n", input);
  return 0;
}
