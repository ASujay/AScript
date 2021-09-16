#include "module.h"
#include  <string.h>
#include <stdio.h>
#include "error.h"
#include <stdlib.h>
#include <errno.h>

bool check_extension(char *file){
  char *extension = file;

  extension = extension + (strlen(file));

  if(strcmp((extension - 5), ASSM) == 0){
      return true;
    }
  //create a error message
  char error_msg[50];
  sprintf(error_msg, "%s is not a valid .assm file.\n", file);
  set_error(FILE_EXTENSION_ERR, error_msg);
  return false;
  }



char* load_module(char* path){
  FILE* fp;

  //read the file
  fp = fopen(path, "r");

  if(fp == NULL){
    char msg[128];
    sprintf(msg, "%s does not exists!", path);
    //The errorno is equal to FILE_NOT_FOUND_ERR
    set_error(errno, msg);
    return NULL;
  }
  //get the size of the module

  //seek to the end
  fseek(fp, 0L, SEEK_END);
  long size = ftell(fp);
  rewind(fp);

  char* code = (char*)malloc(sizeof(char) * (size + 1));

  fread(code, sizeof(char), size, fp);
  fclose(fp);
  code[size] = '\0';
  return code;

}
