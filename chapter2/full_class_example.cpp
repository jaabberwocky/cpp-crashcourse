#include <cstdio>

struct YearNow {
    // use constructors

    // default constructor
    YearNow() {
        year = 2019;
    }

    // custom constructor
    YearNow(int year_input) {
        if (!set_year(year_input)) {
            year = 2019;
        } else {
            year = year_input;
        }
    }
    bool set_year(int year_set) {
        if (year_set < 2019) {
            printf("Year is less than 2019, using 2019...\n");
            year = 2019;
            return false;
        } else {
        year = year_set;
        return true;
        }
    }

    int get_year() {
        return year;
    }

    void add_year() {
        printf("Adding year...\n");
        year++;
    }

    void subtract_year() {
        printf("Subtracting year...\n");
        year--;
    }

    private:
        int year;

};

void print_year(int year) {
    printf("Year: %d\n", year);
};

int main() {
    YearNow y;
    YearNow y2{2042}; // using braced initialization for constructor

    y.set_year(2018);
    print_year(y.get_year());
    y.add_year();
    print_year(y.get_year());
    print_year(y2.get_year());
}