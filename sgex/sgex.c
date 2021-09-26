#include "regex.h"
#include "../libs/error.h"

int main(int argc, char **argv){
    /* check if the file is supplied */
    if(argc == 1){
        set_error(FILE_NOT_SUPPLIED_ERR, "Include a valid .sgex file.\n");
        error_out();
        return 1;
    }else{
        /* Initialize the scanner */
        sc_init(&sc, argv[1]);
    }
}
