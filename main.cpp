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
    std::cout<< std::endl;
    Mystery02Analysis m2A;
    m2A.calculateTimesForSorted();
    m2A.calculateTimesForReverse();
    m2A.calculateTimesForRandom();
    m2A.printSortedDataTimes();
    m2A.printReverseDataTimes();
    m2A.printRandomDataTimes();
    std::cout<< std::endl;
    Mystery03Analysis m3A;
    m3A.calculateTimesForSorted();
    m3A.calculateTimesForReverse();
    m3A.calculateTimesForRandom();
    m3A.printSortedDataTimes();
    m3A.printReverseDataTimes();
    m3A.printRandomDataTimes();
    std::cout<< std::endl;
    Mystery04Analysis m4A;
    m4A.calculateTimesForSorted();
    m4A.calculateTimesForReverse();
    m4A.calculateTimesForRandom();
    m4A.printSortedDataTimes();
    m4A.printReverseDataTimes();
    m4A.printRandomDataTimes();
    std::cout<< std::endl;
    Mystery05Analysis m5A;
    m5A.calculateTimesForSorted();
    m5A.calculateTimesForReverse();
    m5A.calculateTimesForRandom();
    m5A.printSortedDataTimes();
    m5A.printReverseDataTimes();
    m5A.printRandomDataTimes();


    //make some data to sort
    /*const int DATA_SIZE = 5000;
    int* data = new int[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; i++)
        data[i] = i;

    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    print_version_number();
    //create a start and end time_point object
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

    ///Mystery01
    //get the current time, run the algo, then get the current time again
    start = std::chrono::high_resolution_clock::now();
    mystery01(data, DATA_SIZE);
    end = std::chrono::high_resolution_clock::now();

    //calculate the duration between start and end and print to the terminal
    std::chrono::duration<double> time_in_seconds = end - start;
    std::cout << std::fixed << "Mystery01 Duration: " << time_in_seconds.count() << std::endl;

    ///Mystery02
    start = std::chrono::high_resolution_clock::now();
    mystery02(data, DATA_SIZE);
    end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> time_in_seconds2 = end - start;
    std::cout << std::fixed << "Mystery02 Duration: " << time_in_seconds2.count() << std::endl;


    ///Mystery03
    start = std::chrono::high_resolution_clock::now();
    mystery03(data, DATA_SIZE);
    end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> time_in_seconds3 = end - start;
    std::cout << std::fixed << "Mystery03 Duration: " << time_in_seconds3.count() << std::endl;

    ///Mystery04
    start = std::chrono::high_resolution_clock::now();
    mystery04(data, DATA_SIZE);
    end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> time_in_seconds4 = end - start;
    std::cout << std::fixed << "Mystery04 Duration: " << time_in_seconds4.count() << std::endl;

    ///Mystery05
    start = std::chrono::high_resolution_clock::now();
    mystery05(data, DATA_SIZE);
    end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> time_in_seconds5 = end - start;
    std::cout << std::fixed << "Mystery05 Duration: " << time_in_seconds5.count() << std::endl;*/
    return 0;
}
