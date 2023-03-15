#include "../inc/header.h"

int main(int argc, char* argv[]) {
	if (argc != 3) {
		mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");

		exit(1);
	}

	int src_file_descr = open(argv[1], O_RDONLY);

	if (src_file_descr == -1) {
		mx_printerr("mx_cp: ");
		mx_printerr(argv[1]);
		mx_printerr(": ");
		mx_printerr(strerror(errno));
		mx_printerr("\n");

		exit(1);
	}

	int dst_file_descr = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);

	if (dst_file_descr == -1) {
        exit(1);
    }

	char buffer[1];
	int byte_count;

	while ((byte_count = read(src_file_descr, buffer, 1)) != 0) {
		if (byte_count == -1) {
			mx_printerr(strerror(errno));
			mx_printerr("\n");

			exit(1);
		}

		write(dst_file_descr, buffer, 1);
	}

	if (close(src_file_descr) == -1) {
		mx_printerr(strerror(errno));
		mx_printerr("\n");

		exit(1);
	}

	if (close(dst_file_descr) == -1) {
		mx_printerr(strerror(errno));
		mx_printerr("\n");

		exit(1);
	}

	exit(0);
}

