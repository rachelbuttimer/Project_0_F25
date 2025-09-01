#include <string.h>
#include <stdlib.h>
#include "random.h"

void rand_string(char* s, int size){
    for(int i = 0; i < size; i++){
        s[i] = 'a' + (rand() % 26);
    }

    //null terminator
    s[size] = '\0';
}