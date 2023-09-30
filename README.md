# logger
A very tiny and portable logging library

## Usage

Just put `logger.c` and `logger.h` in you project and include `logger.c`

```c
logger_log(int type, const char *message, const char* file, int line);

// Examples
logger_log(LOGGER_WARN, "A very cool warning!", __FILE__, __LINE__);
logger_log(LOGGER_ERROR, "A very bad error!", __FILE__, __LINE__);
logger_log(LOGGER_DEBUG, "A very amazing debug message!", __FILE__, __LINE__);
```
