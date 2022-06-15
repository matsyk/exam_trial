#include "tCounter.h"

std::pair<size_t, size_t> tCount(const std::string& inputStr){
    size_t tCnt = 0;
    size_t tWithoutE = 0;
    const auto strSize = inputStr.size();
    for (size_t i = 0; i < strSize; i++){
        const auto ch = inputStr[i];
        tCnt+=(ch == 't');
        tWithoutE+=(ch=='t' && inputStr[i+1]!='e'); // According to C++ standard, as std::string contain string as null terminated CString we can not care about out of range
    }
    return {tCnt, tWithoutE};

}