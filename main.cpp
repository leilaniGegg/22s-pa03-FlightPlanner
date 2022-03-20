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
    m1A.exportTimes();
    Mystery02Analysis m2A;
    m2A.calculateTimesForSorted();
    m2A.calculateTimesForReverse();
    m2A.calculateTimesForRandom();
    m2A.exportTimes();
    Mystery03Analysis m3A;
    m3A.calculateTimesForSorted();
    m3A.calculateTimesForReverse();
    m3A.calculateTimesForRandom();
    m3A.exportTimes();
    Mystery04Analysis m4A;
    m4A.calculateTimesForSorted();
    m4A.calculateTimesForReverse();
    m4A.calculateTimesForRandom();
    m4A.exportTimes();
    Mystery05Analysis m5A;
    m5A.calculateTimesForSorted();
    m5A.calculateTimesForReverse();
    m5A.calculateTimesForRandom();
    m5A.exportTimes();

    return 0;
}