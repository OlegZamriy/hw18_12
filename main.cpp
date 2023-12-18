#include <iostream>
#include "Worker.h"

int main() {
    Worker worker1("John Doe", "Manager", 2010, 50000.0);
    Worker worker2("Jane Smith", "Engineer", 2015, 60000.0);
    Worker worker3("Bob Johnson", "Analyst", 2012, 55000.0);
    Worker worker4("Alice Brown", "Manager", 2018, 65000.0);

    Worker workers[] = { worker1, worker2, worker3, worker4 };

    int targetExperience = 5;
    std::cout << "Workers with experience more than " << targetExperience << " years:\n";
    for (const auto& worker : workers) {
        if (2023 - worker.getStartYear() > targetExperience) {
            worker.display();
        }
    }

    double targetSalary = 60000.0;
    std::cout << "Workers with salary more than " << targetSalary << ":\n";
    for (const auto& worker : workers) {
        if (worker.getSalary() > targetSalary) {
            worker.display();
        }
    }

    std::string targetPosition = "Manager";
    std::cout << "Workers with position: " << targetPosition << ":\n";
    for (const auto& worker : workers) {
        if (worker.getPosition() == targetPosition) {
            worker.display();
        }
    }

    return 0;
}
