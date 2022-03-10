//
// Created by leila on 3/10/2022.
//

#ifndef PA03_TEMPLATE_MYSTERY03ANALYSIS_H
#define PA03_TEMPLATE_MYSTERY03ANALYSIS_H
#include <chrono>
#include "DataSets.h"
#include <map>
#include "include/sorting_library.h"

class Mystery03Analysis: public DataSets{
private:
    DataSets data;
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    std::map<int,double> sortedDataTimes;
    std::map<int,double> reverseDataTimes;
    std::map<int,double> randomDataTimes;

public:
    void calculateTimesForSorted();
    void calculateTimesForReverse();
    void calculateTimesForRandom();
    void printSortedDataTimes();      //testing only
    void printReverseDataTimes();
    void printRandomDataTimes();
};
#endif //PA03_TEMPLATE_MYSTERY03ANALYSIS_H
