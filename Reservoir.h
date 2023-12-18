#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>

class Reservoir {
private:
    std::string name;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(const std::string& name = "", double width = 0.0, double length = 0.0, double maxDepth = 0.0);

    std::string getName() const;
    double getVolume() const;
    double getSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool operator==(const Reservoir& other) const;

    static Reservoir copy(const Reservoir& other);


    void display() const;
};

#endif // RESERVOIR_H
