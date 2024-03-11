#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>

class EfficientTruckloads {
private:
public:
    // constructor
    EfficientTruckloads();

    // recursive function
    int numTrucks(int numCrates, int loadSize);
    int numTrucks(int numCrates, int loadSize, int t);

};

#endif