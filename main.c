#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{

    int start;
    int length;
    long long int start_time;
    long long int end_time;
    char typed[1000];

    printf("Hello\nWelcome to typing speed checker!");

    printf("press 1 to start typing: \n");
    scanf("%d", &start);

    if (start)
    {
        start_time = time(NULL);
        while (difftime(time(NULL), start_time) <= 10)
        {
            fgets(typed, 1000, stdin);
            length = strlen(typed);
            // printf("%d\n", difftime(time(NULL), start_time));
            
        }
    }

    printf("your typing speed is: %d characters per 10 sec\n", length);

    return 0;
}