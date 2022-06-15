#include <iostream>
#include <string>
#include "tCounter.h"

int main() {
    std::string inputStr;
    std::getline(std::cin, inputStr);
    auto [tCnt, tWithoutECnt] = tCount(inputStr);
    std::cout<<"t="<<tCnt<<std::endl<<"t!e="<<tWithoutECnt<<std::endl;
    return 0;
}
