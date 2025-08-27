#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"

// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
        rand_string(s, size); // to be developed by the student
     }
     return s;
}

int main(int argc, char *argv[])
{
    if(argc < 2) {
        printf("Please pass in 1 command line argument for the length of the word.\n");
        return(0);
    }

    size_t size = atoi(argv[1]);

    char *str;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size);
    printf("%s\n",str);
    free (str);
    

	return(0);
}