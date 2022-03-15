#include <iostream>
#include <chrono>
#include "include/sorting_library.h"
#include "DataSets.h"
#include "Mystery01Analysis.h"
#include "Mystery02Analysis.h"
#include "Mystery03Analysis.h"
#include "Mystery04Analysis.h"
#include "Mystery05Analysis.h"

int main() {
    Mystery01Analysis m1A;
    m1A.calculateTimesForSorted();
    m1A.calculateTimesForReverse();
    m1A.calculateTimesForRandom();
    m1A.printSortedDataTimes();
    m1A.printReverseDataTimes();
    m1A.printRandomDataTimes();
    m1A.exportTimes();
    std::cout<< std::endl;
    Mystery02Analysis m2A;
    m2A.calculateTimesForSorted();
    m2A.calculateTimesForReverse();
    m2A.calculateTimesForRandom();
    m2A.printSortedDataTimes();
    m2A.printReverseDataTimes();
    m2A.printRandomDataTimes();
    m2A.exportTimes();
    std::cout<< std::endl;
    Mystery03Analysis m3A;
    m3A.calculateTimesForSorted();
    m3A.calculateTimesForReverse();
    m3A.calculateTimesForRandom();
    m3A.printSortedDataTimes();
    m3A.printReverseDataTimes();
    m3A.printRandomDataTimes();
    m3A.exportTimes();
    std::cout<< std::endl;
    Mystery04Analysis m4A;
    m4A.calculateTimesForSorted();
    m4A.calculateTimesForReverse();
    m4A.calculateTimesForRandom();
    m4A.printSortedDataTimes();
    m4A.printReverseDataTimes();
    m4A.printRandomDataTimes();
    m4A.exportTimes();
    std::cout<< std::endl;
    Mystery05Analysis m5A;
    m5A.calculateTimesForSorted();
    m5A.calculateTimesForReverse();
    m5A.calculateTimesForRandom();
    m5A.printSortedDataTimes();
    m5A.printReverseDataTimes();
    m5A.printRandomDataTimes();
    m5A.exportTimes();

    return 0;
}