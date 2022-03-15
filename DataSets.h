//
// Created by leila on 3/8/2022.
//

#ifndef PA03_TEMPLATE_DATASETS_H
#define PA03_TEMPLATE_DATASETS_H

#include <cstdlib>
#include <iostream>

class DataSets{
private:

    /**
     * GENERATE THE DATASETS
     */
    void generateSorted(int[], int);
    void generateReverse(int[], int);
    void generateRandom(int[], int);

protected:
    static const int numSizes = 5;
    /**
     * DATASET SIZES
     */
    const int DATA_SIZES[numSizes] = {100, 1000, 10000, 100000, 1000000};

    /**
     * SORTED DATASETS
     */
    int** sortedData = new int*[numSizes];

    /**
     * REVERSE DATASETS
     */
    int** reverseData = new int*[numSizes];

    /**
     * RANDOM DATASETS
     */
    int** randomData = new int*[numSizes];

public:
    DataSets();
    ~DataSets();
    //no need really for copy assignment operator?

};
#endif //PA03_TEMPLATE_DATASETS_H
