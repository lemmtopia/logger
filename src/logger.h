#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <time.h>

typedef struct {
  const char *fmt;
  const char *msg;
} logger_event;

enum { LOGGER_WARN, LOGGER_DEBUG, LOGGER_ERROR };

void logger_log(int type, const char *message, const char* file, int line);

#endif
