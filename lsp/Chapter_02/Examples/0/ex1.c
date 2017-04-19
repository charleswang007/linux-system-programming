#include <stdio.h>

int main()
{
  FILE *rfp;

  char *rfn="myfile.txt";

  printf("sizeof(FILE): %d, sizeof(rfp): %d, sizeof(rfn): %d\n", sizeof(FILE), sizeof(rfp), sizeof(rfn));
} 
