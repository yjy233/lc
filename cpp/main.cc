#include<iostream>
#include<iostream>
#include<algorithm>
#include<random>
#include<vector>
#include<iostream>
#include<algorithm>
#include<atomic>
using namespace std;

vector<int> nums() {
    return std::move(vector<int> {1,2,3});
}
int main(){

    vector<int> tmp = std::move(nums());
    cout<<*lower_bound(tmp.begin(), tmp.end(), 1)<<endl;
}

