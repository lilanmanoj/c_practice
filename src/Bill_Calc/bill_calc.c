#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define text colours */
#define RED   "\x1B[31m"
#define RESET "\x1B[0m"

/* Function headers */
void flush_stdin();
void print_main_menu();
unsigned int get_valid_option();
double get_valid_consumption();
void calculate_bill(unsigned int cat, double con, double *gross, double *fixed, double *net);
void print_bill(unsigned int cat, double con, double gross, double fixed, double net);

/**
 * Main function
 */
int main()
{
    unsigned int option = 0;
    double consumption = 0;
    double gross_amount = 0, fixed_amount = 0, net_amount = 0;

    // Print main menu
    print_main_menu();
    
    // Get validated input for option (User input)
    option = get_valid_option();

    if (option == 0) {
        // If option selected is 0: then exit program
        exit(0);
    } else {
        // Else option selected is between 1 to 4:
        // Get validated input for consumption (kWh) (User input)
        consumption = get_valid_consumption();

        // Calculate then print bill
        calculate_bill(option, consumption, &gross_amount, &fixed_amount, &net_amount);
        print_bill(option, consumption, gross_amount, fixed_amount, net_amount);
    }

    return 0;
}

/**
 * Flush stdin buffer
 * This was required, because
 * when invalid character/string,
 * other than a digit is entered for int variable
 * stdin was not automatically cleared
 */
void flush_stdin()
{   
    char c;

    while((c = getchar()) != '\n');
}

/**
 * Print main menu
 */
void print_main_menu()
{
    printf(" +-------------------------------------------------------------------+\n");
    printf(" |                                                     ___  __ __    |\n");
    printf(" |   ▗▄▄▖ ▗▄▄▄▖▗▖   ▗▖        ▗▄▄▖ ▗▄▖ ▗▖    ▗▄▄▖     |__ \\/ // /    |\n");
    printf(" |   ▐▌ ▐▌  █  ▐▌   ▐▌       ▐▌   ▐▌ ▐▌▐▌   ▐▌        __/ / // /_    |\n");
    printf(" |   ▐▛▀▚▖  █  ▐▌   ▐▌       ▐▌   ▐▛▀▜▌▐▌   ▐▌       / __/__  __/    |\n");
    printf(" |   ▐▙▄▞▘▗▄█▄▖▐▙▄▄▖▐▙▄▄▖    ▝▚▄▄▖▐▌ ▐▌▐▙▄▄▖▝▚▄▄▖   /____/ /_/       |\n");
    printf(" |                                                                   |\n");
    printf(" |    By Lilan Manoj (24sea052)                                      |\n");
    printf(" +-------------------------------------------------------------------+\n");
    printf(" |                                                                   |\n");
    printf(" |    Category 1: Domestic                                           |\n");
    printf(" |    Category 2: Religious                                          |\n");
    printf(" |    Category 3: Industrial/Hotel                                   |\n");
    printf(" |    Category 4: General Purpose/Government                         |\n");
    printf(" |                                                                   |\n");
    printf(" |    -----------------------------------------------------------    |\n");
    printf(" |    Option 0  : Exit                                               |\n");
    printf(" +-------------------------------------------------------------------+\n");
}

/**
 * Get validated user input for menu option
 */
unsigned int get_valid_option()
{
    unsigned int option, state;

    while (1) {
        // Looping until getting a valid input
        printf(" Enter category/option no to proceed: ");
        state = scanf(" %u", &option);

        if (state && option >= 0 && option <= 4) {
            // If get a valid input, then break the loop
            break;
        } else {
            // Else if input is not valid, then print error message
            printf(RED " Invalid/undefined input, please check and try again!\n" RESET);

            // Input buffer needed to be flushed,
            // when invalid character other than a digit is entered
            // Otherwise this was stucked in an infinite loop
            flush_stdin();
        }
    }

    // Return validated user input
    return option;
}

/**
 * Get validated user input for electricity consumption (kWh)
 */
double get_valid_consumption()
{
    unsigned int state;
    double con;

    while (1) {
        // Looping until getting a valid input
        printf(" Enter electricity consumption for month (kWh): ");
        state = scanf(" %lf", &con);

        if (state && con >= 0) {
            // If get a valid input, then break the loop
            break;
        } else {
            // Else if input is not valid, then print error message
            printf(RED " Invalid consumption, please check and enter correct kWh reading!\n" RESET);

            // Input buffer needed to be flushed,
            // when invalid character other than a digit is entered
            // Otherwise this was stucked in an infinite loop
            flush_stdin();
        }
    }

    // Return validated user input
    return con;
}

/**
 * Calculate the bill (Gross, Fixed and Net amount)
 * Based on category and consumption (kWh)
 */
void calculate_bill(unsigned int cat, double con, double *gross, double *fixed, double *net)
{
    if (cat == 1) {
        // Domestic category
        if (con > 0 && con <= 60) {
            if (con > 30) {
                *gross = (30 * 8.0) + (con - 30) * 20.0;
                *fixed = 300.0;
            } else {
                *gross = con * 8.0;
                *fixed = 150.0;
            }
        } else if (con > 60) {
            *gross = 60 * 25.0;

            if (con <= 90) {
                *gross += (con - 60) * 30.0;
                *fixed = 400.0;
            } else if (con > 90 && con <= 120) {
                *gross += (con - 90) * 50.0 + 30 * 30.0;
                *fixed = 1000.0;
            } else if (con > 120 && con <= 180) {
                *gross += (con - 120) * 50.0 + 30 * 50.0 + 30 * 30.0;
                *fixed = 1500.0;
            } else if (con > 180) {
                *gross += (con - 180) * 70.0 + 60 * 50.0 + 30 * 50.0 + 30 * 30.0;
                *fixed = 2000.0;
            }
        }
    } else if (cat == 2) {
        // Religious category
        if (con <= 30) {
            *gross = con * 8.0;
            *fixed = 150.0;
        } else if (con > 30 && con <= 90) {
            *gross = (con - 30) * 9.0 + 30 * 8.0;
            *fixed = 250.0;
        } else if (con > 90 && con <= 120) {
            *gross = (con - 90) * 18.0 + 60 * 9.0 + 30 * 8.0;
            *fixed = 600.0;
        } else if (con > 120 && con <= 180) {
            *gross = (con - 120) * 32.0 + 30 * 18.0 + 60 * 9.0 + 30 * 8.0;
            *fixed = 1500.0;
        } else if (con > 180) {
            *gross = (con - 180) * 43.0 + 60 * 32.0 + 30 * 18.0 + 60 * 9.0 + 30 * 8.0;
            *fixed = 2000.0;
        }
    } else if (cat == 3) {
        // Industrial/Hotel category
        if (con <= 300) {
            *gross = con * 13.5;
            *fixed = 300.0;
        } else if (con > 300) {
            *gross = (con - 300) * 21.5 + 300 * 13.5;
            *fixed = 1000.0;
        }
    } else if (cat == 4) {
        // General Purpose/Government
        if (con <= 180) {
            *gross = con * 33.0;
            *fixed = 600.0;
        } else if (con > 180) {
            *gross = (con - 180) * 43.0 + 180 * 33.0;
            *fixed = 1500.0;
        }
    }

    *net = *gross + *fixed;
}

/**
 * Print detailed bill
 */
void print_bill(unsigned int cat, double con, double gross, double fixed, double net)
{
    // Variable to hold category text
    char str_cat[30];

    // Convert numerical category to text
    switch (cat) {
        case 1:
            strncpy(str_cat, "Domestic", 30);
            break;
        
        case 2:
            strncpy(str_cat, "Religious", 30);
            break;
        
        case 3:
            strncpy(str_cat, "Industrial/Hotel", 30);
            break;
        
        case 4:
            strncpy(str_cat, "General Purpose/Government", 30);
            break;

        default:
            strncpy(str_cat, "n/a", 30);
            break;
    }

    printf("\n +----------- Your Monthly Electricity Bill (Estimated) -------------+");
    printf("\n |                                                                   |");
    printf("\n | Category\t\t: %*s|", 43, str_cat);
    printf("\n | Consumption (kWh)\t: %*.2lf|", 43, con);
    printf("\n +------------------------------------------------------+------------+");
    printf("\n |                                                      |            |");
    printf("\n | Cost for consumed units (LKR)\t\t\t|%*.2lf|", 12, gross);
    printf("\n | Fixed amount for the month (LKR)\t\t\t|%*.2lf|", 12, fixed);
    printf("\n +------------------------------------------------------+------------+");
    printf("\n |                                                      |            |");
    printf("\n | Total amount for the month (LKR)\t\t\t|%*.2lf|", 12, net);
    printf("\n +======================================================+============+\n");
}