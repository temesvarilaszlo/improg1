#include <stdio.h>
#include <string.h>

int main()
{
    char buf[128];

    fgets(buf, sizeof (buf), stdin);

    printf("%i\n", strlen(buf) - 1);

    int i = 0;
    for (; buf[i] == ' '; ++i){
        printf("skipped: %c\n", buf[i]);
    }

    char filter1[128];

    //elejéről levágjuk a spaceket

    int j = 0;
    for (; buf[i] != '\0'; ++i, ++j){
        filter1[j] = buf[i];
    }
    filter1[j] = '\0';

    //végéről levágjuk

    for (int i = strlen(filter1) - 1; filter1[i] == ' ' || filter1[i] == '\n'; --i){
        filter1[i] = '\0';
    }

    printf("filter1: \"%s\"\n", filter1);

    char filter2[128];
    int cnt = 0;
    for (int i = 1; i < strlen(filter1); ++i)
    {
        if(filter1[i-1] != ' '){
            filter2[cnt++] = filter1[i-1];
        }
        if (filter1[i] == ' ' && filter1[i-1] != ' '){
            filter2[cnt++] = filter1[i];
        }
    }
    
    int count = 0;
    for (int i = 0; i < strlen(filter2); ++i)
    {
        if (filter2[i] == ' '){
            ++count;
        }
    }

    printf("filter2: %s\n", filter2);
    printf("count: %i\n", count+1);
}