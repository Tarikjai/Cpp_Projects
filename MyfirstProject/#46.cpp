// #46
#include <iostream>
#include <string>

using namespace std;

enum enWeekDay {
    sun = 1,
    mon = 2,
    tue = 3,
    wed = 4,
    thu = 5,
    fri = 6,
    sat = 7
};



void showWeekDayMenu()
{
    cout << "*************************\n";
    cout << "\t Weekdays\n";
    cout << "*************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednesday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
    cout << "*************************\n";
    cout << "Please enter the number of day?\n";
}


enWeekDay ReadWeekDay()
{
    int wd;
    enWeekDay WeekDay;

    cin >> wd;
    return   (enWeekDay)wd;


}

string GetWeekDayName(enWeekDay WeekDay)
{

    switch (WeekDay) {
    case enWeekDay::sun:
        return "Sunday";
        break;
    case enWeekDay::mon:
        return "Monday";
        break;
    case enWeekDay::tue:
        return "Tuesday";
        break;
    case enWeekDay::wed:
        return "Wednesday";
        break;
    case enWeekDay::thu:
        return "Thursday";
        break;
    case enWeekDay::fri:
        return "Friday";
        break;
    case enWeekDay::sat:
        return "Saturday";
        break;
    default:
        return "Invalid day";
    }


}

int main()
{
    showWeekDayMenu();

    cout << "Today is: " << GetWeekDayName(ReadWeekDay()) << endl;

}