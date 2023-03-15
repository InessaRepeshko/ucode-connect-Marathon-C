#include <unistd.h>

void mx_printchar(char c);

static void mx_printchars(char c, int amount) {
    for (int i = 0; i < amount; i++) {
        mx_printchar(c);
    }
}

static void mx_cube_print_edge(int size) {
    mx_printchars(' ', size);
}

static void mx_cube_print_upper_rib(int size) {
    mx_printchar('+');
    mx_printchars('-', size);
    mx_printchar('+');
}

void mx_cube(int n) {
    if (n < 2) {
        return;
    }

    // Beginning of the cube.
    int height = n;
    int length = n * 2;
    int edge = n / 2;
    int space = edge;

    // First part of the cube.
    // First line indent.
    mx_cube_print_edge(edge + 1);

    // Rear upper rib + vertexes.
    mx_cube_print_upper_rib(length);
    mx_printchar('\n');

    // Diagonal rib.

    for (int i = 0; i < edge; i++, space--) {
        // Upper left rib.
        mx_cube_print_edge(space);
        mx_printchar('/');
        
        //Upper right rib.
        mx_cube_print_edge(length);
        mx_printchar('/');
        
        //Lateral right rib (upper part).
        if (i == 0) {
            mx_printchar('|');
        }
        else {
            mx_cube_print_edge(edge - space);
            mx_printchar('|');
        }
        
        mx_printchar('\n');
    }

    // Front upper rib + vertexes.
    mx_cube_print_upper_rib(length);

    // Lateral right rib (middle part).
    mx_cube_print_edge(edge);
    mx_printchar('|');
    mx_printchar('\n');

    // Second part of cube.
    space = edge;
    
    for (int i = 0; i < height; i++) {
        // Lateral right rib indent.
        if ((height / 2 < i + 1
            && height % 2 == 0)
            || (height / 2 < i
            && height % 2 == 1)) {
            space--;
        }

        // Front left vertical side rib.
        mx_printchar('|');
        
        // Front vertical side rib indent.
        mx_cube_print_edge(length);
        
        // Front right vertical side rib.
        mx_printchar('|');

        // Lateral right side indent.
        mx_cube_print_edge(space);
        
        // Rear bottom right vertex.
        if ((height/ 2 == i + 1
            && height % 2 == 0)
            || (height / 2 == i
            && height % 2 == 1)) {
            mx_printchar('+');
        }
        else if (space < height / 2) {
                // Lateral right side rib.
                mx_printchar('/');
            }
            else {
                // Lateral right rib (bottom part).
                mx_printchar('|');
            }
            
            // Line feed for second part of cube.
            mx_printchar('\n');
    }

    // Front bottom rib + vertexes.
    mx_cube_print_upper_rib(length);
    
    // Line feeds after the cube.
    mx_printchar('\n');
}

