#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidNic(char nic[14])
{
    return ((strlen(nic) - 1) == 10 && (nic[9] == 'V' || nic[9] == 'v' || nic[9] == 'X' || nic[9] == 'x')) ||
        ((strlen(nic) - 1) == 12 && (nic[11] >= '0' && nic[11] <= '9'));
}

int isOldNicFormat(char nic[14]) 
{
    return (strlen(nic) - 1) == 10 && (nic[9] == 'V' || nic[9] == 'v' || nic[9] == 'X' || nic[9] == 'x');
}

int isLeapYear(unsigned int year)
{
    unsigned int div_by_4 = 0, div_by_100 = 0;

    div_by_4 = ((year % 4) == 0) ? 1 : 0;
	div_by_100 = ((year % 100) == 0) ? 1 : 0;

    if (div_by_4 && div_by_100) {
        if ((year % 400) == 0) {
            return 1;
        } else {
            return 0;
        }
    } else if (div_by_4 && !div_by_100) {
        return 1;
    } else {
       return 0;
    }

    return 0;
}

int getThreeDigits(char nic[14], int isOldFormat)
{
    char three_digit_date[3];

    for (int i = 0; i < 3; i++) {
        three_digit_date[i] = (isOldFormat) ? nic[i + 2] : nic[i + 4];
    }

    return atoi(three_digit_date);
}

int getIsMale(char nic[14], int isOldFormat)
{
    return (getThreeDigits(nic, isOldFormat) > 500) ? 0 : 1;
}

int getYear(char nic[14], int isOldFormat)
{
    char two_digit_year[2], four_digit_year[4];
    int year;

    if (isOldFormat) {
        for (int i = 0; i < 2; i++) {
            two_digit_year[i] = nic[i];
        }

        if (atoi(two_digit_year) > 25) {
            year = 1900 + atoi(two_digit_year);
        } else {
            year = 2000 + atoi(two_digit_year);
        }
    } else {
        for (int i = 0; i < 4; i++) {
            four_digit_year[i] = nic[i];
        }

        year = atoi(four_digit_year);
    }

    return year;
}

int getDays(char nic[14], int isOldFormat)
{
    int three_digit_date_and_sex = getThreeDigits(nic, isOldFormat);

    return (three_digit_date_and_sex > 500) ? three_digit_date_and_sex - 500 : three_digit_date_and_sex;
}

int getMonth(int days, int is_leap_year)
{
    int month_no;
    int cum_days[12];
    int leap_year_month_days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int non_leap_year_month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (int i = 0; i < 12; i++) {
        if (i == 0) {
            cum_days[i] = (is_leap_year) ? leap_year_month_days[0] : non_leap_year_month_days[0];
            continue;
        }

        cum_days[i] = (is_leap_year) ? cum_days[i - 1] + leap_year_month_days[i]
            : cum_days[i - 1] + non_leap_year_month_days[i];
    }

    for (int i = 0; i < 12; i++) {
        if (days > cum_days[i]) {
            continue;
        } else {
            month_no = i + 1;
            break;
        }
    }

    return month_no;
}

int getDateOfMonth(int days, int is_leap_year)
{
    int dateOfMonth;
    int cum_days[12];
    int leap_year_month_days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int non_leap_year_month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (int i = 0; i < 12; i++) {
        if (i == 0) {
            cum_days[i] = (is_leap_year) ? leap_year_month_days[0] : non_leap_year_month_days[0];
            continue;
        }

        cum_days[i] = (is_leap_year) ? cum_days[i - 1] + leap_year_month_days[i]
            : cum_days[i - 1] + non_leap_year_month_days[i];
    }

    for (int i = 0; i < 12; i++) {
        if (days > cum_days[i]) {
            continue;
        } else {
            dateOfMonth = (i > 0) ? days - cum_days[i - 1] : days;
            break;
        }
    }

    return dateOfMonth - 1;
}

void printFormattedNic(char nic[14], int isOldFormat, int year, int three_digits)
{
    if (isOldFormat) {
        char last_digits[4];

        for (int i =0; i < 4; i++) {
            last_digits[i] = nic[i + 5];
        }

        printf("NIC: %d%d0%d\n", year, three_digits, atoi(last_digits));
    } else {
        printf("NIC: %s\n", nic);
    }
}

void printFormattedDob(int year, int month, int day)
{
    char mon[4];

    switch (month) {
        case 1:
            strcpy(mon, "Jan");
            break;
        
        case 2:
            strcpy(mon, "Feb");
            break;
        
        case 3:
            strcpy(mon, "Mar");
            break;

        case 4:
            strcpy(mon, "Apr");
            break;
        
        case 5:
            strcpy(mon, "May");
            break;

        case 6:
            strcpy(mon, "Jun");
            break;
        
        case 7:
            strcpy(mon, "Jul");
            break;
        
        case 8:
            strcpy(mon, "Aug");
            break;
        
        case 9:
            strcpy(mon, "Sep");
            break;

        case 10:
            strcpy(mon, "Oct");
            break;
        
        case 11:
            strcpy(mon, "Nov");
            break;

        case 12:
            strcpy(mon, "Dec");
            break;
        
        default:
            break;
    }

    printf("DOB: %2d-%s-%d\n", day, mon, year);
}

void printFormattedSex(int is_male)
{
    printf("Sex: %s\n", (is_male) ? "Male" : "Female");
}

int main()
{
    unsigned int year, is_old_nic, is_leap_year, totalDays, month, date_of_month, is_male;
    char nic[14];

    printf("Enter NIC No: ");
    fgets(nic, 14, stdin);

    if(isValidNic(nic)) {
        is_old_nic = isOldNicFormat(nic);
        year = getYear(nic, is_old_nic);
        is_leap_year = isLeapYear(year);
        totalDays = getDays(nic, is_old_nic);
        month = getMonth(totalDays, is_leap_year);
        date_of_month = getDateOfMonth(totalDays, is_leap_year);
        is_male = getIsMale(nic, is_old_nic);

        printFormattedNic(nic, is_old_nic, year, getThreeDigits(nic, is_old_nic));
        printFormattedDob(year, month, date_of_month);
        printFormattedSex(is_male);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}