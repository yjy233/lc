#include<iostream>
#include<random>
using namespace std;


int Rand5(){
    random_device rd; // 非确定性随机数生成器（获取系统熵）
    mt19937 engine(rd());

    std::uniform_int_distribution<int> dist(1, 5);

    // 3. 生成随机 int
    int random_int = dist(engine);
    return random_int;
}

int Rand7(){
    // 1 - 5 * 5
    // 0 5 10 15 20 
    // 1 2 3 4 5
    // 1-25
   // Rand5 

   int a = Rand5() - 1;
   int b = Rand5();

   int c = a*5+b;

   if (c >= 22){
    return Rand7();
   }

   // 1-25
   // 1 8 15
   // 7 14 21
   return c%7+1;

}
int main(){
    random_device rd; // 非确定性随机数生成器（获取系统熵）
    mt19937 engine(rd());

    std::uniform_int_distribution<int> dist(1, 5);

    // 3. 生成随机 int
    int random_int = dist(engine);


    vector<int> cnt(8,0);

    for (int i = 0;i<100000;i++) {
        cnt[Rand7()]++;
    }

    for (auto e:cnt) {
        cout<<e<<" ";
    }
    cout<<endl;
}