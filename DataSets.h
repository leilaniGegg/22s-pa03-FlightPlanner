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
    static const int DATA_SIZE1 = 10;
    static const int DATA_SIZE2 = 100;
    static const int DATA_SIZE3 = 1000;
    static const int DATA_SIZE4 = 10000;
    static const int DATA_SIZE5 = 100000;

    /**
     * GENERATE THE DATASETS
     */
    void generateSorted(int[], int);
    void generateReverse(int[], int);
    void generateRandom(int[], int);

public:

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
    DataSets();
    ~DataSets();
    //no need really for copy assignment operator?
    void printSortedData4();
    void printReverseData4();
    void printRandomData4();
    int getDATA_SIZE1()const;
    int getDATA_SIZE2()const;
    int getDATA_SIZE3()const;
    int getDATA_SIZE4()const;
    int getDATA_SIZE5()const;


};
#endif //PA03_TEMPLATE_DATASETS_H
