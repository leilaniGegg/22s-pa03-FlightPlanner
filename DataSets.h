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
     * DATASET SIZES
     */
    static const int DATA_SIZE1 = 50;
    static const int DATA_SIZE2 = 500;
    static const int DATA_SIZE3 = 5000;
    static const int DATA_SIZE4 = 50000;
    static const int DATA_SIZE5 = 500000;

    /**
     * SORTED DATASETS
     */
    int* sortedData1 = new int[DATA_SIZE1];
    int* sortedData2 = new int[DATA_SIZE2];
    int* sortedData3 = new int[DATA_SIZE3];
    int* sortedData4 = new int[DATA_SIZE4];
    int* sortedData5 = new int[DATA_SIZE5];

    /**
     * REVERSE DATASETS
     */
    int* reverseData1 = new int[DATA_SIZE1];
    int* reverseData2 = new int[DATA_SIZE2];
    int* reverseData3 = new int[DATA_SIZE3];
    int* reverseData4 = new int[DATA_SIZE4];
    int* reverseData5 = new int[DATA_SIZE5];

    /**
     * RANDOM DATASETS
     */
    int* randomData1 = new int[DATA_SIZE1];
    int* randomData2 = new int[DATA_SIZE2];
    int* randomData3 = new int[DATA_SIZE3];
    int* randomData4 = new int[DATA_SIZE4];
    int* randomData5 = new int[DATA_SIZE5];

    void generateSorted(int[], int);
    void generateReverse(int[], int);
    void generateRandom(int[], int);

public:
    DataSets();
    ~DataSets();
    //no need really for copy assignment operator?
    void printSortedData4();
    void printReverseData4();
    void printRandomData4();

};
#endif //PA03_TEMPLATE_DATASETS_H
