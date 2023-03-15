#include "../inc/header.h"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return -1;
	}

	int file_descr = open(argv[1],O_RDONLY);

	if (file_descr == -1) {
		mx_printerr("error\n");
		return -1;
	}

	char buffer[1];
	int byte_count;

	while ((byte_count = read(file_descr, buffer, 1)) != 0) {
		if (byte_count == -1) {
			mx_printerr("error\n");
			return -1;
		}

		write(1, buffer, 1);
	}

	if (close(file_descr) == -1) {
		mx_printerr("error\n");
		return -1;
	}

	return 0;
}

