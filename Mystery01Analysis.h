//
// Created by leila on 3/9/2022.
//

#ifndef PA03_TEMPLATE_MYSTERY01ANALYSIS_H
#define PA03_TEMPLATE_MYSTERY01ANALYSIS_H

#include <chrono>
#include "DataSets.h"

class Mystery01Analysis{
private:
    DataSets data;
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;


public:
    void calculateTimesForSorted();
    /**
     * start = std::chrono::high_resolution_clock::now();
       mystery01(data, DATA_SIZE);
       end = std::chrono::high_resolution_clock::now();
     */
    void calculateTimesForReverse();
    void calculateTimesForRandom();

};
#endif //PA03_TEMPLATE_MYSTERY01ANALYSIS_H