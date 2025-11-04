// crash.cpp
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
    int* p = nullptr;
    *p = 42;  // 触发段错误
    return 0;
}
