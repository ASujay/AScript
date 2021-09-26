#include "error.h"
#include <stdio.h>

static ERROR error;

void set_error(module_error type, char *error_msg){
  error.type = type;
  error.error_msg = error_msg;
}


// This will help in debugging the application

void error_out(){
  switch(error.type){
    case FILE_NOT_SUPPLIED_ERR:
      printf("FILE_NOT_SUPPLIED_ERR: %s", error.error_msg);
      break;
    case FILE_NOT_FOUND_ERR:
      printf("FILE NOT_FOUND_ERR: %s\n", error.error_msg);
      break;
    case FILE_EXTENSION_ERR:
      printf("FILE_EXTENSION_ERR: %s", error.error_msg);
      break;
    case FILE_INVALID_ERR:
      printf("FILE_INVALID_ERR: %s", error.error_msg);
      break;
    case IO_ERROR:
      perror("IO Error");
      break;
    case BAD_FILE_NUMBER:
      perror("Bad file number");
      break;
    default:
      printf("Unknown Error");
      break;
  }
}
