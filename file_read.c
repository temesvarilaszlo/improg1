#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file = fopen("alma.txt", "r");

    char buf[8];
    while (fgets(buf, sizeof(buf), file) != NULL){
        printf("%s\n", buf);
    }
    if (feof(file)){
            puts("End of file");
    }
}