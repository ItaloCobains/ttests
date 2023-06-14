#ifndef __LIBTTESTS_H__

#define __LIBTTESTS_H__
#define TTESTS_VERSION "0.1.0"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

typedef struct {
  const char *description;
  void (*testFunction)();
} TestBlock;

void describe(const char *description, void (*testFunction)());

void it(const char *description, void (*testFunction)());

void expect(bool expression, const char *message);

#endif // __LIBTTESTS_H__
