#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(char * output, size_t size) 
{
    char letters[] = "abcdefghijklmnopqrstuvwxyz"; 
    for(int i = 0; i < size; i++) {
        size_t index = (double) rand() / RAND_MAX * (sizeof letters - 1);
        *output = letters[index];
        
        // Increment Pointer and Decrease remaining
        output++;
    }
}