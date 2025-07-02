#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char line[255];
   
   FILE *fpointer = fopen("text.txt", "r");
//    fprintf(fpointer, "This line contains some information,\nthis is the second line,\nthis is the third lin of information");
    // fprintf(fpointer, "\nThis is fourth line of information");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);


    fclose(fpointer);
    return 0;
}