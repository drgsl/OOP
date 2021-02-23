// Lab2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <cstring>

int main()
{
    Student s1;
    s1.setName("Alex");
    std::cout << s1.getName() << std::endl;

    s1.setGradeMath(5);
    std::cout << s1.getGradeMath() << std::endl;

    s1.setGradeEnglish(6);
    std::cout << s1.getGradeEnglish() << std::endl;

    s1.setGradeHistory(7);
    std::cout << s1.getGradeHistory() << std::endl;

    std::cout << s1.getGradeAverage() << std::endl;
}

int compareNames(Student s1, Student s2) {
    if (strlen(s1.getName()) > strlen(s2.getName()))
        return 1;
    else if (strlen(s1.getName()) < strlen(s2.getName()))
        return -1;
    else
        return 0;
}

int compareGradeMath(Student s1, Student s2) {
    if (s1.getGradeMath() > s2.getGradeMath())
        return 1;
    else if (s1.getGradeMath() < s2.getGradeMath())
        return -1;
    else
        return 0;
}

int compareGradeMath(Student s1, Student s2) {
    if (s1.getGradeMath() > s2.getGradeMath())
        return 1;
    else if (s1.getGradeMath() < s2.getGradeMath())
        return -1;
    else
        return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
