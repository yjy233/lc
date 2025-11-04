#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    std::cout << "程序开始运行..." << std::endl;

    // 故意访问空指针，触发段错误
    int *ptr = nullptr;
    *ptr = 42;  // 这里会引发 Segmentation Fault

    std::cout << "这行代码不会被执行。" << std::endl;

    return 0;
}

// /Users/yjy/Library/Logs/DiagnosticReports/*.crash

