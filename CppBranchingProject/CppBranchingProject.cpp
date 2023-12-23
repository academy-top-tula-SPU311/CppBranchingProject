#include <iostream>

int main()
{
    /*
    std::cout << "Input number: ";
    int number;
    std::cin >> number;

    if (number < 0)
    {
        // true code
        number = -number;
    }

    std::cout << "Abs = " << number << "\n";

    if (number % 2 == 0)
    {
        // true code
        std::cout << "Number even\n";
    }
    else
    {
        // false code
        std::cout << "Number odd\n";
    }
    */

    /*
    double a, b, c, d;
    std::cout << "input a: ";
    std::cin >> a;
    std::cout << "input b: ";
    std::cin >> b;
    std::cout << "input c: ";
    std::cin >> c;

    // discriminant
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        std::cout << "x1 = " << -(b + sqrt(d)) / 2 / a << "\n";
        std::cout << "x2 = " << -(b - sqrt(d)) / 2 / a << "\n";
    }
    else
    {
        if (d == 0)
            std::cout << "x = " << -b / 2 / a << "\n";
        else
            std::cout << "roots not exists\n";
    }

    if (d >= 0)
    {
        if (d > 0)
        {
            std::cout << "x1 = " << -(b + sqrt(d)) / 2 / a << "\n";
            std::cout << "x2 = " << -(b - sqrt(d)) / 2 / a << "\n";
        }
        else
            std::cout << "x = " << -b / 2 / a << "\n";
    }
    else
        std::cout << "roots not exists\n";
    */

    /*int day;
    std::cout << "input number of week day: ";
    std::cin >> day;*/

    /*
    if (day == 1)
        std::cout << "Monday\n";
    else if(day == 2)
        std::cout << "Tuesday\n";
    else if (day == 3)
        std::cout << "Wednesday\n";
    else if (day == 4)
        std::cout << "Thursday\n";
    else if (day == 5)
        std::cout << "Friday\n";
    else if (day == 6)
        std::cout << "Saturday\n";
    else if (day == 7)
        std::cout << "Sunday\n";
    else
        std::cout << "Wrong number of week day!\n";
    */

    //switch (day)
    //{
    //case 1: 
    //    std::cout << "Monday\n";
    //    break;
    //case 2:
    //    std::cout << "Tuesday\n";
    //    break;
    //case 3:
    //    std::cout << "Wednesday\n";
    //    break;
    //case 4:
    //    std::cout << "Thursday\n";
    //    break;
    //case 5:
    //    std::cout << "Friday\n";
    //    break;
    //case 6:
    //    std::cout << "Saturday\n";
    //    break;
    //case 7:
    //    std::cout << "Sunday\n";
    //    break;
    //default:
    //    std::cout << "Wrong number of week day!\n";
    //}

    //switch (day)
    //{
    //case 1:
    //case 2:
    //case 3:
    //case 4:
    //case 5:
    //    std::cout << "Weekday\n";
    //    break;
    //case 6:
    //case 7:
    //    std::cout << "Weekend\n";
    //    break;
    //default:
    //    std::cout << "Wrong number of week day!\n";
    //}

    ////if(day == 1 || day == 2 || day == 3)
    //int month;
    //std::cout << "Input number of month: ";
    //std::cin >> month;

    //switch (month)
    //{
    //case 1:
    //case 2:
    //case 12:
    //    std::cout << "Winter\n";
    //    break;
    //case 3:
    //case 4:
    //case 5:
    //    std::cout << "Spring\n";
    //    break;
    //case 6:
    //case 7:
    //case 8:
    //    std::cout << "Summer\n";
    //    break;
    //case 9:
    //case 10:
    //case 11:
    //    std::cout << "Autumn\n";
    //    break;
    //default:
    //    std::cout << "Error!\n";
    //}

    //if(month == 12 || month == 1 || month == 2)
    //    std::cout << "Winter\n";
    //else if (month == 3 || month == 4 || month == 5)
    //    std::cout << "Spring\n";
    //else if (month == 6 || month == 7 || month == 8)
    //    std::cout << "Summer\n";
    //else if (month == 9 || month == 10 || month == 11)
    //    std::cout << "Autumn\n";
    //else 
    //    std::cout << "Error!\n";

    int number{ 15 };
    if (number % 2 == 0)
        std::cout << "even\n";
    else
        std::cout << "odd\n";

    (number % 2 == 0) ? std::cout << "even\n" : std::cout << "odd\n";

    std::cout << ((number % 2 == 0) ? "even" : "odd") << "\n";
}
