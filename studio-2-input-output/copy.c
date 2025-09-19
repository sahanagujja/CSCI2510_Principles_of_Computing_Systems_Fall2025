#include <unistd.h>    // For read(), write()
#include <stdlib.h>    // For exit()

#define bufferSize 200

int main() {
    char buffer[bufferSize];
    ssize_t bytes_read;
    
    while (1) {
        bytes_read = read(STDIN_FILENO, buffer, bufferSize);
        
        if (bytes_read == 0) {
            break;
        }
        
        // Check for -1 for error
        if (bytes_read == -1) {
            // exit program if theres an error
            exit(1);
        }
        
        write(STDOUT_FILENO, buffer, bytes_read);
    }
    
    return 0;
}