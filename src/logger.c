#include "logger.h"

void logger_log(int type, const char *message, const char* file, int line) {
  logger_event ev;
  switch (type) {
  case LOGGER_WARN:
    ev.fmt = "\x1b[33m WARN ";
    break;
  case LOGGER_DEBUG:
    ev.fmt = "\x1b[34m DEBUG";
    break;
  case LOGGER_ERROR:
    ev.fmt = "\x1b[31m ERROR";
    break;
  }
  ev.msg = message;

  char cwd[PATH_MAX];
  time_t my_time = time(NULL);
  char* time_str = ctime(&my_time);
  
  printf("%s -> %s \x1b[35m%s/%s:%d\x1b[0m - %s\n", time_str, ev.fmt, getcwd(cwd, sizeof(cwd)), file, line, ev.msg);
}
