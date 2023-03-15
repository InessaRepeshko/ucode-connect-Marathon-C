#include "../inc/header.h"

int main(int argc, char *argv[]) {
	int total_line = 0;
	int total_word = 0;
	int total_character = 0;
    
	if (argc == 1) {	
		int line = 0;
		int word = 0;
		int character = 0;
		char temp;
		char space = ' ';
		int byte_count;
        
		while ((byte_count = read(0, &temp, 1))) {
			if (byte_count == -1) {
				mx_printerr(strerror(errno));
				mx_printerr("\n");
                
				exit(1);
			}
            
			if (mx_isspace(temp) && !mx_isspace(space)) {
                word++;
            }
            
			if (temp == '\n') {
                line++;
            }
            
            character++;
			space = temp;
		}
        
		mx_printwc(line, word, character, 2, argv[0]);
        
		exit(0);
	}
    
	for (int i = 1; i < argc; i++) {
		int file_descr = open(argv[i], O_RDONLY);

		if (file_descr == -1) {
			mx_printerr("mx_wc: ");
			mx_printerr(argv[i]);
			mx_printerr(": open: ");
			mx_printerr(strerror(errno));
			mx_printerr("\n");

			exit(1);
		}

		char temp;
		char space = ' ';

		if (read(file_descr, &temp, 1) == -1 && errno == EISDIR) {
			mx_printerr("mx_wc: ");
			mx_printerr(argv[i]);
			mx_printerr(": read: ");
			mx_printerr(strerror(errno));
			mx_printerr("\n");

			exit(1);
		}

		if (close(file_descr) == -1) {
			mx_printerr(strerror(errno));

			exit(1);
		}

		file_descr = open(argv[i], O_RDONLY);

		if (file_descr == -1) {
			mx_printerr(strerror(errno));

			exit(1);
		}

		int line = 0;
		int word = 0;
		int character = 0;
		int byte_count;

		while ((byte_count = read(file_descr, &temp, 1)) != 0) {
			if (byte_count == -1) {
				mx_printerr(strerror(errno));

				exit(1);
			}

			if (mx_isspace(temp) && !mx_isspace(space)) {
				word++;
				total_word++;
			}

			if (temp == '\n') {
				line++;
				total_line++;
			}

            character++;
			total_character++;
			space = temp;
		}

		if (close(file_descr) == -1) {
			mx_printerr(strerror(errno));

			exit(1);
		}

		mx_printwc(line, word, character, 1, argv[i]);
	}

	if (argc == 2) {
        exit(0);
    }
	else {
        mx_printwc(total_line, total_word, total_character, 0, argv[0]);
    }

	exit(0);
}

