#include<vector>

using namespace std;

class KthLargest {
public:
    vector<int> heap;
    int K;

    KthLargest(int k, vector<int>& nums) {
        this->K = k;

        for (int i = 0;i<nums.size();i++){
            this->add(nums[i]);
        }
    }
    
    int add(int val) {

        auto sortF = [](int a, int b) {
            return a > b;
        };
        if(heap.size() < this->K) {
            heap.push_back(val);

            if (heap.size() == this->K) {
                make_heap(heap.begin(),heap.end(), sortF);
                return heap[0];
            }
            return -1;
        }   

        if (val <= heap[0]) return heap[0];

        pop_heap(heap.begin(), heap.end(), sortF);
        heap[this->K-1] = val;
        push_heap(heap.begin(), heap.end(), sortF);
        return heap[0];
    }
};