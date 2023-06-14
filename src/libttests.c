#include "../include/libttests.h"

void describe(const char *description, void (*testFunction)())
{
  TestBlock block = {description, testFunction};
  printf("Descrição: %s\n", block.description);
  block.testFunction();
}

void it(const char *description, void (*testFunction)())
{
  TestBlock block = {description, testFunction};
  printf("    Teste: %s - ", block.description);
  block.testFunction();
}

void expect(bool expression, const char *message)
{
  if (!expression)
  {
    printf("FALHA: %s\n", message);
    exit(EXIT_FAILURE);
  }
  printf("OK\n");
}
