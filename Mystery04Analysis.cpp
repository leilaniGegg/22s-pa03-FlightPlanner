//
// Created by leila on 3/10/2022.
//

#include "Mystery04Analysis.h"
void Mystery04Analysis::calculateTimesForSorted(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery04(sortedData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery04 " << DATA_SIZES[i] << " Sorted Duration: " << time_in_seconds.count() << std::endl;
        sortedDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery04Analysis::calculateTimesForReverse(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery04(reverseData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery04 " << DATA_SIZES[i] << " Reverse Duration: " << time_in_seconds.count() << std::endl;
        reverseDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery04Analysis::calculateTimesForRandom(){
    for(int i = 0; i < numSizes-1; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery04(randomData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery04 " << DATA_SIZES[i] << " Random Duration: " << time_in_seconds.count() << std::endl;
        randomDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery04Analysis::printSortedDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery04 Sorted Times" << std::endl;
    for(itr = sortedDataTimes.begin(); itr != sortedDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery04Analysis::printReverseDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery04 Reverse Times" << std::endl;
    for(itr = reverseDataTimes.begin(); itr != reverseDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery04Analysis::printRandomDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery04 Random Times" << std::endl;
    for(itr = randomDataTimes.begin(); itr != randomDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}