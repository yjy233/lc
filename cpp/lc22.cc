#include <string>
#include <vector>
#include <iostream>

using namespace std;



/*
    这题的思路就是 按照数目循环 新增  “（” “）”，避免递归，然后还有个性能问题就是 swap，一定要使用swap 函数处理 tmp和res的交换，提升比较明心啊
*/
struct Obj{
    int left;
    int right;
    string r; 

    //Obj() = default;
    Obj(): left(0), right(0), r("") {
        //cout<<"ggg"<<endl;
    };
    //Obj(const Obj&& oo): left(oo.left), right(oo.right), r(oo.r) {
    //    cout<<"&&"<<endl;
    //}
    //Obj(const Obj& oo): left(oo.left), right(oo.right), r(oo.r) {
    //    cout<<"&"<<endl;
    //}
};

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        Obj empty;
        vector<Obj> res{empty};
        vector<Obj> tmp;
        //res.push_back(empty);

        for (int i = 0;i<2*n;i++) {
            tmp.clear();
            for (auto &o:res){
                
                if (o.left < n) {
                    Obj lo(o);
                    lo.left++;
                    lo.r += "(";
                   
                    tmp.push_back(lo);
                }


                if (o.left > o.right && o.right<n) {
                    o.right++;
                    o.r += ")";
                    tmp.push_back(o);
                }
            }   
            
            swap(res,tmp); 
        }

        vector<string> ret;
        for (auto &o:res) {
            ret.push_back(std::move(o.r));
        }
        
        return ret;
    }
};

int main() {
    Solution s;
    //auto res = s.generateParenthesis(3);
    //cout<<"gggtt"<<endl;
    //for (auto &r:res) {
    //    cout<<r<<endl;
    //}

    Obj o;
    o.r = "ggg";

    vector<Obj> v;
    v.push_back(o);
    cout<<"xxx"<<endl;
}