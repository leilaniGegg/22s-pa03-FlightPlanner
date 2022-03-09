//
// Created by leila on 3/8/2022.
//

#include "DataSets.h"

DataSets::DataSets(){
    generateSorted(sortedData1, DATA_SIZE1);
    generateSorted(sortedData2, DATA_SIZE2);
    generateSorted(sortedData3, DATA_SIZE3);
    generateSorted(sortedData4, DATA_SIZE4);
    generateSorted(sortedData5, DATA_SIZE5);

    generateReverse(reverseData1, DATA_SIZE1);
    generateReverse(reverseData2, DATA_SIZE2);
    generateReverse(reverseData3, DATA_SIZE3);
    generateReverse(reverseData4, DATA_SIZE4);
    generateReverse(reverseData5, DATA_SIZE5);

    generateRandom(randomData1, DATA_SIZE1);
    generateRandom(randomData2, DATA_SIZE2);
    generateRandom(randomData3, DATA_SIZE3);
    generateRandom(randomData4, DATA_SIZE4);
    generateRandom(randomData5, DATA_SIZE5);

}
DataSets::~DataSets(){
    delete sortedData1;
    delete sortedData2;
    delete sortedData3;
    delete sortedData4;
    delete sortedData5;

    delete reverseData1;
    delete reverseData2;
    delete reverseData3;
    delete reverseData4;
    delete reverseData5;

    delete randomData1;
    delete randomData2;
    delete randomData3;
    delete randomData4;
    delete randomData5;
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

void DataSets::printSortedData4(){
    for (int i = 0; i < DATA_SIZE3; i++)
        std::cout << sortedData3[i] << std::endl;
}
void DataSets::printReverseData4(){
    for (int i = 0; i < DATA_SIZE3; i++)
        std::cout << reverseData3[i] << std::endl;

}
void DataSets::printRandomData4(){
    for (int i = 0; i < DATA_SIZE3; i++)
        std::cout << randomData3[i] << std::endl;
}

int DataSets::getDATA_SIZE1()const{
    return DATA_SIZE1;
}
int DataSets::getDATA_SIZE2()const{
    return DATA_SIZE2;
}
int DataSets::getDATA_SIZE3()const{
    return DATA_SIZE3;
}
int DataSets::getDATA_SIZE4()const{
    return DATA_SIZE4;
}
int DataSets::getDATA_SIZE5()const{
    return DATA_SIZE5;
}