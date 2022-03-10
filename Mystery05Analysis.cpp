//
// Created by leila on 3/10/2022.
//

#include "Mystery05Analysis.h"
void Mystery05Analysis::calculateTimesForSorted(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery05(sortedData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery05 " << DATA_SIZES[i] << " Sorted Duration: " << time_in_seconds.count() << std::endl;
        sortedDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery05Analysis::calculateTimesForReverse(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery05(reverseData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery05 " << DATA_SIZES[i] << " Reverse Duration: " << time_in_seconds.count() << std::endl;
        reverseDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery05Analysis::calculateTimesForRandom(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery05(randomData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery05 " << DATA_SIZES[i] << " Random Duration: " << time_in_seconds.count() << std::endl;
        randomDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery05Analysis::printSortedDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery05 Sorted Times" << std::endl;
    for(itr = sortedDataTimes.begin(); itr != sortedDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery05Analysis::printReverseDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery05 Reverse Times" << std::endl;
    for(itr = reverseDataTimes.begin(); itr != reverseDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery05Analysis::printRandomDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery05 Random Times" << std::endl;
    for(itr = randomDataTimes.begin(); itr != randomDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}