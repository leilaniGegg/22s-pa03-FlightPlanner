#include <iostream>
#include <chrono>
#include "include/sorting_library.h"
#include "DataSets.h"


int main() {

    //make some data to sort
    const int DATA_SIZE = 5000;
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
    std::cout << std::fixed << "Mystery05 Duration: " << time_in_seconds5.count() << std::endl;
    return 0;
}
