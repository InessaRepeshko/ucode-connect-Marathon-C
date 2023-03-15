#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char *m;
    m = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    
    write(1, m, strlen(m));
}

