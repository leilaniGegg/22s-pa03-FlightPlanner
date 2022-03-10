//
// Created by leila on 3/9/2022.
//

#ifndef PA03_TEMPLATE_MYSTERY01ANALYSIS_H
#define PA03_TEMPLATE_MYSTERY01ANALYSIS_H

#include <chrono>
#include "DataSets.h"
#include <map>

class Mystery01Analysis: public DataSets{
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
#endif //PA03_TEMPLATE_MYSTERY01ANALYSIS_H