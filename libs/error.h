#ifndef ERROR_H_
#define ERROR_H_

typedef enum{
  FILE_NOT_SUPPLIED_ERR = 1,
  FILE_NOT_FOUND_ERR,
  FILE_EXTENSION_ERR,
  FILE_INVALID_ERR,
  IO_ERROR = 5,
  BAD_FILE_NUMBER = 9
}module_error;

typedef struct{
  module_error type;
  char* error_msg;
}ERROR;

void set_error(module_error type, char *error_msg);
void error_out();


#endif // ERROR_H_
