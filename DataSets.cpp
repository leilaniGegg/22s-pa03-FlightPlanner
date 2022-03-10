//
// Created by leila on 3/8/2022.
//

#include "DataSets.h"

DataSets::DataSets(){
    /**
     * CREATE AND GENERATE THE SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        sortedData[i] = new int[DATA_SIZES[i]];
    }
    for(int i = 0; i < numSizes; i++){
        generateSorted(sortedData[i], DATA_SIZES[i]);
    }

    /**
     * CREATE AND GENERATE THE REVERSE SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        reverseData[i] = new int[DATA_SIZES[i]];
    }
    for(int i = 0; i < numSizes; i++){
        generateSorted(reverseData[i], DATA_SIZES[i]);
    }

    /**
     * CREATE AND GENERATE THE RANDOMLY SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        randomData[i] = new int[DATA_SIZES[i]];
    }
    for(int i = 0; i < numSizes; i++){
        generateSorted(randomData[i], DATA_SIZES[i]);
    }

}

DataSets::~DataSets(){
    /**
     * DELETE SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        delete[] sortedData[i];
    }
    delete[] sortedData;

    /**
     * DELETE REVERSE SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        delete[] reverseData[i];
    }
    delete[] reverseData;

    /**
     * DELETE RANDOMLY SORTED ARRAY DATA SETS
     */
    for(int i = 0; i < numSizes; i++){
        delete[] randomData[i];
    }
    delete[] randomData;
}

void DataSets::generateSorted(int arr[], int size){
    for (int i = 0; i < size; i++)
        arr[i] = i;
}

void DataSets::generateReverse(int arr[], int size){
    int i,j;
    for (i = size - 1, j = 0; i >= 0 && j < size; i--, j++)
        arr[j] = i;
}

void DataSets::generateRandom(int arr[], int size){
    for (int i = 0; i < size; i++)
        arr[i] = rand() % size;
}
