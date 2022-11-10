#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define NUMBER_OF_STRING 4
#define MAX_STRING_SIZE 256

// array of valid String IDs
char ID_arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
{ "1ab21231",
  "12adawda",
  "123ada",
  "123ada21"
};

// checks if the given String ID is valid by comparing it to the existing array of valid IDs
static bool isValidID (char *s) {
    for (int i = 0; i < NUMBER_OF_STRING; i++) {
        if (strcmp(s, ID_arr[i]) == 0) {
            return true;
        }
    }
    
    return false;
}

// prints out the array of String IDs for testing purposes
void print_array (const char arr[NUMBER_OF_STRING][MAX_STRING_SIZE])
{
	for (int i = 0; i < NUMBER_OF_STRING; i++)
	{
		printf("'%s' has length %d\n", arr[i], strlen(arr[i]));
	}
}

// Driver class
int main(void) {
    char *correct = "1a23ada";
    char *wrong = "123";
    
    printf("\nArray of IDs:\n");
    print_array(ID_arr);
    
    isValid(correct);
    isValid(wrong);
    
	return 0;
}