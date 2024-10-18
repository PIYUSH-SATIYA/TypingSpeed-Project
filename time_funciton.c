#include <stdio.h>
#include <time.h>

int main() {
    // this time() func give time in seconds passed since Unix epoch
    time_t any;
    time(&any);
    // passing anything into time() function is equivalent to passing null hence it gives time value as above
    
    // Convert the time given in seconds into a readable format
    char* timeString = ctime(&any);
    
    // Print the current time
    printf("Current time: %s", timeString);
    
    return 0;
}
