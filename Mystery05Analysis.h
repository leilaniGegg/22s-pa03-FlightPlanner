//
// Created by leila on 3/10/2022.
//

#ifndef PA03_TEMPLATE_MYSTERY05ANALYSIS_H
#define PA03_TEMPLATE_MYSTERY05ANALYSIS_H

#include <iostream>
#include <fstream>
#include <chrono>
#include "DataSets.h"
#include <map>
#include "include/sorting_library.h"

class Mystery05Analysis: public DataSets{
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
    void exportTimes();
    void writeToFile(const std::string&, std::map<int, double>);
};
#endif //PA03_TEMPLATE_MYSTERY05ANALYSIS_H
