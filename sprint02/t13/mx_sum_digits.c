int mx_sum_digits(int num) {
    int sum = 0;

    while (num != 0) {
        if (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        else {
            sum *= -1;

        }
    }

    return sum;
}

