#include <stdio.h>
#include "../libs/error.h"
#include "../libs/module.h"
#include "regex.h"
#include <stdlib.h>

Scanner sc;

void sc_init(Scanner *s, char *filepath){
    if(check_extension(filepath, ".sgex")){
        char *source = load_module(filepath);
        if(source != NULL){
            s->source = source;
            s->start = s->current = 0;
            s->line = 0;
            printf("Scannar initialized.\n");
        }else{
            error_out();
            printf("Regex Compilation Terminated...\n");
            exit(1);
        }
    } else{
        error_out();
        printf("Regex Compilation Terminated...\n");
        exit(1);
    }
}
