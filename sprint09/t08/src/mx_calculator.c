#include "../inc/calculator.h"

void error_input(enum e_error error) {
	switch (error) {
		case DIV_BY_ZERO:
			mx_printerr("error: division by zero\n");
			break;
		case INCORRECT_OPERATION:
            mx_printerr("error: invalid operation\n");
            break;
		case INCORRECT_OPERAND:
            mx_printerr("error: invalid number\n");
            break;
        default:
        	break;
	}

	exit(-1);
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");

		exit(-1);
	}

	char *operand1 = mx_strdup(argv[1]);
	char *operand2 = mx_strdup(argv[3]);

	if ((mx_atoi(operand2) == 0) 
        && (mx_strncmp(argv[2], "/", 1) == 0)) {
		error_input(DIV_BY_ZERO);
	}
    
	for (int i = 0; operand1[i] != '\0' 
        && operand2[i] != '\0'; i++) {
		if (!mx_isdigit(operand1[i]) 
            || ! mx_isdigit(operand2[i])) {
			error_input(INCORRECT_OPERAND);
		}
	}
    
	if (mx_strncmp(argv[2], "+", 1) != 0
		&& mx_strncmp(argv[2], "-", 1) != 0
		&& mx_strncmp(argv[2], "*", 1) != 0
		&& mx_strncmp(argv[2], "/", 1) != 0
		&& mx_strncmp(argv[2], "%", 1) != 0) {
		error_input(INCORRECT_OPERATION);
	}
    
	t_operation operation;
    
	if (mx_strncmp(argv[2], "+", 1) == 0) {
		operation.op = ADD;
	}
    
	if (mx_strncmp(argv[2], "-", 1) == 0) {
		operation.op = SUB;
	}
    
	if (mx_strncmp(argv[2], "*", 1) == 0) {
		operation.op = MUL;
	}
    
	if (mx_strncmp(argv[2], "/", 1) == 0) {
		operation.op = DIV;
	}
    
	if (mx_strncmp(argv[2], "%", 1) == 0) {
		operation.op = MOD;
	}
    
	switch (operation.op) {
		case ADD:
			operation.f = mx_add;
			break;
		case SUB:
            operation.f = mx_sub;
            break;
		case MUL:
            operation.f = mx_mul;
            break;
        case DIV:
            operation.f = mx_div;
            break;
        case MOD:
            operation.f = mx_mod;
            break;
        default:
        	break;
	}
    
	int number = operation.f(mx_atoi(operand1), mx_atoi(operand2));
	mx_printint(number);
	mx_printchar('\n');
    
	exit(0);
}
	
