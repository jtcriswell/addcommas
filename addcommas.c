#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int
main (int argc, char ** argv) {
  int value;

  setlocale(LC_NUMERIC, "");
  while ((scanf ("%d\n", &value)) != EOF) {
    printf ("%'d\n", value);
  }

  return 0;
}
