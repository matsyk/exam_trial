#include "tCounter.h"

#include <cassert>

void test1(){
    auto [tCnt, tWithoutECnt] = tCount("test");
    assert(tCnt == 2);
    assert(tWithoutECnt = 1);
}

void test2(){
    auto [tCnt, tWithoutECnt] = tCount("eeeettt");
    assert(tCnt == 3);
    assert(tWithoutECnt = 3);
}

void test3(){
    auto [tCnt, tWithoutECnt] = tCount("eee");
    assert(tCnt == 0);
    assert(tWithoutECnt == 0);
}

int main(){
    test1();
    test2();
    test3();
    return 0;
}