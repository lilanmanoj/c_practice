#include <stdio.h>

float convert_temp(float value, char type) {
	if (type == 'c' || type == 'C') {
        return (value * 9.0/5) + 32.0;
    } else if (type == 'f' || type == 'F') {
        return (value - 32.0) * 5.0/9;
    } else {
        return 0;
    }
}

void print_conversion(float value, char type) {
    //print the conversion in the following format
    //you are expected to call the convert_temp function inside this
    //example:
    //100.00 c > 212.00 f\n

    float conv_val = convert_temp(value, type);

    if (type == 'c' || type == 'C') {
        printf("%.2f c > %.2f f\n", value, conv_val);
    } else if (type == 'f' || type == 'F') {
        printf("%.2f f > %.2f c\n", value, conv_val);
    } else {
        printf("Type Error\n");
    }
}

int main () {
    char typ;
    float val;

    scanf(" %f", &val);
    scanf(" %c", &typ);

    print_conversion(val, typ);

    return 0;
}