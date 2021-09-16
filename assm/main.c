#include <stdio.h>
#include <stdlib.h>
#include "module.h"
#include "error.h"



int main(int argc, char** argv){
  if(argc == 1){
    set_error(FILE_NOT_SUPPLIED_ERR, "Include a valid .assm file.\n");
    error_out();
  }else{
    if(check_extension(argv[1])){
      char* code;
      if((code  = load_module(argv[1])) != NULL){
        printf("%s: loaded successfully.\n", argv[1]);
        printf("Code:\n %s", code);
        free(code);
      }else{
        error_out();
      }
    }else{
      error_out();
      return 1;
    }
  }

  return 0;
}
