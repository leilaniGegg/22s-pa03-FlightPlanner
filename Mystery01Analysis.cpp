//
// Created by leila on 3/9/2022.
//

#include "Mystery01Analysis.h"
#include "include/sorting_library.h"

/* example
//create a start and end time_point object
std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

//get the current time, run the algo, then get the current time again
start = std::chrono::high_resolution_clock::now();
mystery01(data, DATA_SIZE);
end = std::chrono::high_resolution_clock::now();

//calculate the duration between start and end and print to the terminal
std::chrono::duration<double> time_in_seconds = end - start;
std::cout << std::fixed << "Mystery01 Duration: " << time_in_seconds.count() << std::endl;*/

void Mystery01Analysis::calculateTimesForSorted(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery01(sortedData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        std::cout << std::fixed << "Mystery01 " << DATA_SIZES[i] << " Sorted Duration: " << time_in_seconds.count() << std::endl;
        sortedDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery01Analysis::calculateTimesForReverse(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery01(reverseData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        std::cout << std::fixed << "Mystery01 " << DATA_SIZES[i] << " Reverse Duration: " << time_in_seconds.count() << std::endl;
        reverseDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery01Analysis::calculateTimesForRandom(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery01(randomData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        std::cout << std::fixed << "Mystery01 " << DATA_SIZES[i] << " Random Duration: " << time_in_seconds.count() << std::endl;
        randomDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery01Analysis::printSortedDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery01 Sorted Times" << std::endl;
    for(itr = sortedDataTimes.begin(); itr != sortedDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery01Analysis::printReverseDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery01 Reverse Times" << std::endl;
    for(itr = reverseDataTimes.begin(); itr != reverseDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery01Analysis::printRandomDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery01 Random Times" << std::endl;
    for(itr = randomDataTimes.begin(); itr != randomDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}