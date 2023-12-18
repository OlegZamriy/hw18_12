#include "Reservoir.h"
#include <iostream>

Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

std::string Reservoir::getName() const {
    return name;
}

double Reservoir::getVolume() const {
    return width * length * maxDepth;
}

double Reservoir::getSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    return true; 
}

bool Reservoir::operator==(const Reservoir& other) const {
    return name == other.name && width == other.width && length == other.length && maxDepth == other.maxDepth;
}

Reservoir Reservoir::copy(const Reservoir& other) {
    return Reservoir(other.name, other.width, other.length, other.maxDepth);
}


void Reservoir::display() const {
    std::cout << "Reservoir: " << name << "\nWidth: " << width << "\nLength: " << length
        << "\nMax Depth: " << maxDepth << "\nVolume: " << getVolume() << "\nSurface Area: " << getSurfaceArea() << "\n\n";
}
