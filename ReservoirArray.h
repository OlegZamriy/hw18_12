#ifndef RESERVOIR_ARRAY_H
#define RESERVOIR_ARRAY_H

#include "Reservoir.h"

class ReservoirArray {
private:
    Reservoir* reservoirs;
    int size;
    int capacity;

public:
    ReservoirArray();
    ~ReservoirArray();

    void addReservoir(const Reservoir& reservoir);
    void removeReservoir(const std::string& name);
    void displayAll() const;

    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif // RESERVOIR_ARRAY_H
