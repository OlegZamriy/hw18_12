#include "ReservoirArray.h"
#include <fstream>

const int INITIAL_CAPACITY = 10;

ReservoirArray::ReservoirArray() : size(0), capacity(INITIAL_CAPACITY) {
    reservoirs = new Reservoir[capacity];
}

ReservoirArray::~ReservoirArray() {
    delete[] reservoirs;
}

void ReservoirArray::addReservoir(const Reservoir& reservoir) {
    if (size == capacity) {
        capacity *= 2;
        Reservoir* newReservoirs = new Reservoir[capacity];
        for (int i = 0; i < size; ++i) {
            newReservoirs[i] = reservoirs[i];
        }
        delete[] reservoirs;
        reservoirs = newReservoirs;
    }

    reservoirs[size++] = reservoir;
}

void ReservoirArray::removeReservoir(const std::string& name) {
    for (int i = 0; i < size; ++i) {
        if (reservoirs[i].getName() == name) {
            for (int j = i; j < size - 1; ++j) {
                reservoirs[j] = reservoirs[j + 1];
            }
            --size;
            break;
        }
    }
}

void ReservoirArray::displayAll() const {
    for (int i = 0; i < size; ++i) {
        reservoirs[i].display();
    }
}

void ReservoirArray::saveToFile(const std::string& filename) const {
    std::ofstream file(filename, std::ios::binary | std::ios::trunc);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&size), sizeof(int));
        file.write(reinterpret_cast<const char*>(reservoirs), size * sizeof(Reservoir));
        file.close();
    }
}

void ReservoirArray::loadFromFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(&size), sizeof(int));
        if (size > capacity) {
            delete[] reservoirs;
            capacity = size;
            reservoirs = new Reservoir[capacity];
        }
        file.read(reinterpret_cast<char*>(reservoirs), size * sizeof(Reservoir));
        file.close();
    }
}
