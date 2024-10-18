#include <stdio.h>
#include <time.h>

int main(){
    int differnce;

    time_t start;
    time_t end;

    start = time(NULL);

    

    end = time(NULL);

    printf("The diff is: %d\n", difftime(start, end));

    return 0;
}