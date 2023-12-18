// main.cpp
#include "ReservoirArray.h"

int main() {
    ReservoirArray reservoirArray;

    Reservoir r1("Lake1", 50.0, 100.0, 10.0);
    Reservoir r2("Pond1", 20.0, 30.0, 5.0);
    Reservoir r3("Sea1", 200.0, 400.0, 30.0);

    reservoirArray.addReservoir(r1);
    reservoirArray.addReservoir(r2);
    reservoirArray.addReservoir(r3);

    reservoirArray.displayAll();

    reservoirArray.saveToFile("reservoirs.dat");

    ReservoirArray loadedReservoirArray;
    loadedReservoirArray.loadFromFile("reservoirs.dat");

    loadedReservoirArray.displayAll();

    return 0;
}
