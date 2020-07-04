#include <cstdio>
#include <string.h>

int main() {

    enum class Parties {
        SDP,
        PAP,
        WP,
        PSP
    };

    enum class Gender {
        Male,
        Female
    };

    struct Voter {
        char name[50];
        int age;
        Gender gender;
        Parties choice;
    };

    Voter v;
    strcpy(v.name, "Tobias");
    v.age = 30;
    v.gender = Gender::Male;
    v.choice = Parties::WP;

    printf("Voter %s is %d years old.\n", v.name, v.age);
    switch (v.choice) {
        case Parties::PAP: {
            printf("PAP!\n");
        } break;
        case Parties::WP: {
            printf("Hammer time!\n");
        } break;
        case Parties::PSP: {
            printf("PSP!\n");
        } break;
        case Parties::SDP: {
            printf("SDP!\n");
        } break;
    }
}