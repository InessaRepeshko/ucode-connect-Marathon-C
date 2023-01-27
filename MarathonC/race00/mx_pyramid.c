#include <unistd.h>

void mx_printchar(char c);

static void mx_printchars(char c, int amount) {
    for (int i = 0; i < amount; i++) {
        mx_printchar(c);
    }
}

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0) {
        return;
    }
    
    //Beginning of the pyramid.
    int i = 0;
    
    //Upper part of the pyramid.
    while (i < n) {
        if (i == 0) {
            //First indent.
            mx_printchars(' ', n - 1);
            
            //Apex (top) of the pyramid.
            mx_printchar('/');
            mx_printchar('\\');
        }
        //First middle part of the pyramid
        else if (i !=n -1 && i + 1 <= n / 2) {
                //Front left lateral edge.
                mx_printchars(' ', n - i - 1);
                mx_printchar('/');
                
                //Front right lateral rib.
                mx_printchars(' ', i * 2 - 1);
                mx_printchar('\\');

                //Rear right lateral rib.
                mx_printchars(' ', i);
                mx_printchar('\\');
            }
            //Second middle part of the pyramid.
            else if (i != n -1) {
                    //Front left lateral rib.
                    mx_printchars(' ', n - i - 1);
                    mx_printchar('/');
                    
                    //Front right lateral rib.
                    mx_printchars(' ', i * 2 - 1);
                    mx_printchar('\\');
                    
                    //Rear right lateral rib.
                    mx_printchars(' ', n - i - 1);
                    mx_printchar('|');
                }
                //Bottom of the pyramid.
                else {
                    //Front left vertex of the pyramid.
                    mx_printchar('/');
                    
                    //Front rib of the base.
                    mx_printchars('_', i * 2 - 1);
                    
                    //Front right vertex of the pyramid.
                    mx_printchar('\\');
                    mx_printchar('|');
                }
                    //Line feeds of the pyramid.
                    i++;
                    
                    mx_printchar('\n');
    }
    //End of the pyramid.
}

