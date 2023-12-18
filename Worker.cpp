#include "Worker.h"
#include <iostream>

Worker::Worker(const std::string& fullName, const std::string& position, int startYear, double salary)
    : fullName(fullName), position(position), startYear(startYear), salary(salary) {}

std::string Worker::getFullName() const {
    return fullName;
}

std::string Worker::getPosition() const {
    return position;
}

int Worker::getStartYear() const {
    return startYear;
}

double Worker::getSalary() const {
    return salary;
}

void Worker::display() const {
    std::cout << "Name: " << fullName << "\nPosition: " << position
        << "\nStart Year: " << startYear << "\nSalary: " << salary << "\n\n";
}
