#include "../inc/header.h"

bool mx_check_maze(int height, int width, char *str) {

    for (int i = 0; i < height; i++) {
        int length = 0;
        int j = 0;
        for (j = i * width + j + i; str[j] != '\n'; j++) {
            length++;
        }

        if (length != width) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]) {
    int file_descr = open(argv[1], O_RDONLY);

    if (argc != 6) {
        char *err_msg = "usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n";
        mx_printerr(err_msg);

        exit(-1);
    }

    if (file_descr < 0) {
        mx_printerr("map does not exist\n");
        exit(-1);
    }
    
    close(file_descr);

//    Finding the size of the labyrinth.
    char *string = mx_file_to_str(argv[1]);   
    int height = 1;
    int width = 0;
    int max = 0;
    int temp = 0;
    
    while (string[temp] != '\0') {
        if (string[temp] == '\n') {
            if (string[temp + 1] == '\0') {
                break;
            }
            
            height++;
            
            if (max != 0
                && width != 0
                && width != max) {
                mx_printerr("map error\n");

                exit(-1);
            }

            if (max < width) {
                max = width;
            }

            width = 0;
        }
        else {
            width++;
        }

        temp++;
    }

    width = max;

    if (!mx_check_maze(height, width,string)
        || height == width) {
        mx_printerr("map error\n");

        exit(-1);
    }

    temp = 0;
    char array[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= width; j++) {
            if (string[temp] == 0) {
                break;
            }

            if (string[temp] == '\n') {
                temp++;
                continue;
            }

            array[i][j] = string[temp];            
            temp++;
        }
    }

//    Lee algorithm (pathfinding algorithm).
    int x1 = mx_atoi(argv[2]);
    int y1 = mx_atoi(argv[3]);
    int x2 = mx_atoi(argv[4]);
    int y2 = mx_atoi(argv[5]);
    bool status = true;
    bool dot_check = true;
    int counter = 1;
    int x_temp = 0;

    if (x1 < 0
        || x2 < 0
        || y1 < 0
        || y2 < 0
        || x1 > width
        || x2 > width
        || y1 > height
        || y2 > height) {
        mx_printerr("points are out of map range\n");

        exit(-1);
    }

    if (array[y1][x1] != '.') {
        mx_printerr("entry point can not be obstacle\n");

        exit(-1);
    }
    else {
        array[y1][x1] = counter - 1;
    }

    if (array[y2][x2] != '.') {
        mx_printerr("exit point can not be obstacle\n");

        exit(-1);
    }

    while (status) {
        status = false;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (array[i][j] == (char) (counter - 1)) {
                    if (array[i - 1][j] == '.') {
                        array[i - 1][j] = (char) counter;
                        status = true;
                    }

                    if (array[i][j + 1] == '.') {
                        array[i][j + 1] = (char) counter;
                        status = true;
                    }

                    if (array[i + 1][j] == '.') {
                        array[i + 1][j] = (char) counter;
                        status = true;
                    }

                    if (array[i][j - 1] == '.') {
                        array[i][j - 1] = (char) counter;
                        status = true;
                    }
                }
            }
        }

        if (dot_check
            && array[mx_atoi(argv[4])][mx_atoi(argv[5])] != '.') {
            x_temp = counter;
            dot_check = false;
        }
        
        counter++;
    }

    counter -= 2 ;

//    Prints the output on the console screen.
    x1 = mx_atoi(argv[4]);
    y1 = mx_atoi(argv[5]);

    if (array[y1][x1] == '.'
        || array[y1][x1] == '#') {
        mx_printerr("route not found\n");
        exit(-1);
    }

    mx_printstr("dist=");
    mx_printint(counter);
    mx_printstr("\n");
    mx_printstr("exit=");
    mx_printint(array[y1][x1]);
    mx_printstr("\n");

    if (array[y1][x1] == (char)x_temp) {
        array[y1][x1] = '*';
    }
    else {
        x_temp = counter;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (array[i][j] == counter) {
                array[i][j] = 'D';
            }
        }
    }

    while (x_temp != 0) {
        if (array[y2][x2 - 1] == (char) (x_temp - 1)) {
            x2 -= 1;
        }
        else if (array[y2 + 1][x2] == (char) (x_temp - 1)) {
            y2 += 1;
        }
        else if (array[y2 - 1][x2] == (char) (x_temp - 1)
            && (y2 - 1) > 0) {
            y2 -= 1;
        }
        else if (array[y2][x2 + 1] == (char)(x_temp - 1) 
            && (x2 + 1) < width) {
            x2 += 1;
        }

        array[y2][x2] = '*';
        x_temp--;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (array[i][j] != 'D'
                && array[i][j] != '.'
                && array[i][j] != '#'
                && array[i][j] != '*') {
                array[i][j] = '.';
            }
        }
    }

    if (array[y1][x1] == 'D') {
        array[y1][x1] = 'X';
    }

//    Save the maze and the path from the entry point to the exit point in the file "path.txt".
    file_descr = open("path.txt", O_CREAT | O_WRONLY, S_IWUSR | S_IRUSR);
    int current_x = 0;
    int current_y = 0;
    int length = (width + 1 ) * height;
    char buffer[length];
    int index = 0;

    while (current_y != height) {
        if (current_x == width) {
            buffer[index++] = '\n';
            current_x = 0;
            current_y++;
        }
        
        buffer[index++] = array[current_y][current_x];
        current_x++;
    }

    write(file_descr, buffer, length);
    close(file_descr);

    return 0;
}

