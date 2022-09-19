#include <stdio.h>
//gcc -W -Wall -Wextra -pedantic
int main(){
    for(int i = 0; i <=100; ++i){
        if(i % 3 == 0 && i % 5 == 0){
            printf("Fizzbuzz\n");
        }
        else if(i % 3 == 0){
            printf("Fizz\n");
        }
        else if(i % 5 == 0){
            printf("Buzz\n");
        }
        else{
            printf("%i\n",i);
        }
    }
    return 0;
}
