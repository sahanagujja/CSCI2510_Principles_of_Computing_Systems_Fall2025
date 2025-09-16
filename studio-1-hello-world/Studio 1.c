// 1 - Sahana Gujja - using my own computer

// 2 - #include <stdio.h>

// 3 - printf signature: printf(const char *format, ....);
//     fprintf signature: fprintf(FILE *stream, const char *format,...);
//         Difference: fprintf() requires FILE* stream as its first argument, while printf() awlays prints to stdout automatically

// 4 - printf sends output to the names output stream and fprintf sends output to the standard stream

// 5 - Hello, World!

// 6 - Section 2

// 7 - #include <unistd.h>

// 8 - [Blank]

// 9 - #include <unistd.h>

// 10 - If the third argument is larger than the actual bufferr length, write() will attemot to read and output extra memory beyond the buffer.
//      This prints garbage characters after it prints "Hello, World!" because its trying to access memory beyond the buffer I set.

// 11 - Low level operations like write() would need a system call because youu wouldn't be dealing with abstraction layer
//       library functions would be needed when you do something siimpler that can work across multiple platforms
//       use printf or fprintf when you want portable code that works on any standard implementation

// 12 - content in hello.sh:
//       echo "Hello, world!"
