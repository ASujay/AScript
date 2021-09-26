#ifndef MODULE_H_
#define MODULE_H_

#include <stdbool.h>

#define ASSM ".assm"

bool check_extension(char *file, char *extension);

char* load_module(char* path);

#endif // MODULE_H_
