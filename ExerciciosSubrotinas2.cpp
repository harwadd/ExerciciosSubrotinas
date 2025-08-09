// Subroutines Exercises - Calculate age based on birth date and current date
#include <iostream>
using namespace std;

int calculateAge(int birthYear, int birthMonth, int birthDay, int currentYear, int currentMonth, int currentDay) {
    // Function to calculate age based on birth date and current date
    int age = currentYear - birthYear;

    // If the birthday hasn't occurred yet this year, subtract one from age
    if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
        age--;
    }

    return age;
}


void readDate(const string& input, int &day, int &month, int &year) {
    // Function to read a date in day, month, year format
    cout << input;
    cin >> day >> month >> year;
}

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    // Read current date
    readDate("Insira a data atual (dia, mês e ano): ", currentDay, currentMonth, currentYear);

    // Read birth date
    readDate("Insira sua data de nascimento (dia, mês e ano): ", birthDay, birthMonth, birthYear);

    int age = calculateAge(birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay);

    cout << "Sua idade é: " << age << " anos." << endl;

    return 0;
}
