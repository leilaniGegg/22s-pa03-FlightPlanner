//
// Created by leila on 3/10/2022.
//

#include "Mystery02Analysis.h"

void Mystery02Analysis::calculateTimesForSorted(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery02(sortedData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery02 " << DATA_SIZES[i] << " Sorted Duration: " << time_in_seconds.count() << std::endl;
        sortedDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery02Analysis::calculateTimesForReverse(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery02(reverseData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery02 " << DATA_SIZES[i] << " Reverse Duration: " << time_in_seconds.count() << std::endl;
        reverseDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery02Analysis::calculateTimesForRandom(){
    for(int i = 0; i < numSizes; i++) {
        start = std::chrono::high_resolution_clock::now();
        mystery02(randomData[i], DATA_SIZES[i]);
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time_in_seconds = end - start;
        //Print statement for testing only
        //std::cout << std::fixed << "Mystery02 " << DATA_SIZES[i] << " Random Duration: " << time_in_seconds.count() << std::endl;
        randomDataTimes.insert(std::pair<int,double>(DATA_SIZES[i], time_in_seconds.count()));
    }
}

void Mystery02Analysis::printSortedDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery02 Sorted Times" << std::endl;
    for(itr = sortedDataTimes.begin(); itr != sortedDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery02Analysis::printReverseDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery02 Reverse Times" << std::endl;
    for(itr = reverseDataTimes.begin(); itr != reverseDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery02Analysis::printRandomDataTimes(){
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    std::map<int, double>::iterator itr;
    std::cout << "Mystery02 Random Times" << std::endl;
    for(itr = randomDataTimes.begin(); itr != randomDataTimes.end(); itr++){
        std::cout << itr->first << " elements - " << itr->second << " seconds" << std::endl;
    }
}

void Mystery02Analysis::exportTimes(){
    std::string outputSorted = "times/mystery02/sortedDataTimes.csv";
    std::string outputReverse = "times/mystery02/reverseDataTimes.csv";
    std::string outputRandom = "times/mystery02/randomDataTimes.csv";
    writeToFile(outputSorted, sortedDataTimes);
    writeToFile(outputReverse, reverseDataTimes);
    writeToFile(outputRandom, randomDataTimes);

}

void Mystery02Analysis::writeToFile(const std::string& filename, std::map<int, double> times){
    std::ofstream output;
    output.open(filename);
    if(!output.is_open()){
        std::cout << "Failed to open file" << std::endl;
    }
    else {
        std::map<int, double>::iterator itr;
        for (itr = times.begin(); itr != times.end(); itr++) {
            output << std::fixed << std::showpoint;
            output.precision(9);
            //num elements, time
            output << itr->first << "," << itr->second << std::endl;
        }
        output.close();
    }
}