#include "../inc/header.h"

int main(int argc, char* argv[]) {
	int byte_count;

	if (argc == 1) {
		char c;
		while ((byte_count = read(0, &c, 1)) != 0) {
			if (byte_count == -1) {
				mx_printerr(strerror(errno));
				mx_printerr("\n");
                
				exit(1);
			}
            
			write(1, &c, 1);
		}
        
		exit(0);
	}
    
	for (int i = 1; i < argc; i++) {
		int file_descr = open(argv[i], O_RDONLY);
		char buffer[1];

		if (file_descr == -1) {
			mx_printerr("mx_cat: ");
			mx_printerr(argv[i]);
			mx_printerr(": ");
			mx_printerr(strerror(errno));
			mx_printerr("\n");

			exit(1);
		}

		while ((byte_count = read(file_descr, buffer, 1)) != 0) {
			if (byte_count == -1) {
				mx_printerr(strerror(errno));
				mx_printerr("\n");

				exit(1);
			}

			write(1, buffer, 1);
		}
		if (close(file_descr) == -1) {
			mx_printerr(strerror(errno));
			mx_printerr("\n");

			exit(1);
		}
	}

	exit(0);
}

