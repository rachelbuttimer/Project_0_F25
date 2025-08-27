#include <string.h>

char* rand_string(char* s, int size){
    for(int i = 0; i < size; i++){
        s[i] = 'a' + (rand() % 26);
    }
}