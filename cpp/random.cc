#include<random>

using namespace std;
int main(){
    random_device rd; // 非确定性随机数生成器（获取系统熵）
    mt19937 engine(rd());

    std::uniform_int_distribution<int> dist(1, 5);

    // 3. 生成随机 int
    int random_int = dist(engine);
}