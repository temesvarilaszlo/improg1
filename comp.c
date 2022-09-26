#include <stdio.h>

int main()
{
    int arr[] = {0,3,8,3,5,11,15,-2,4,5,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i < n; ++i){
        if (5 <= arr[i] && arr[i] <=10){
            printf("%i\n", arr[i]);
        }
    }
}