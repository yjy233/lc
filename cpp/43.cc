#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        vector<int> n1 = parse(num1);
        vector<int> n2 = parse(num2);

        vector<int> res = {0};
        for (int i = 0;i<num2.size();i++) {
            vector<int> tmp = {0};
            int cnt = num2[i] - '0';

            for (int j = 0;j<cnt;j++) {
                tmp = bigAdd(tmp, n1);
            }

            for (int j = 0; j < num2.size()-1-i;j++) {
                tmp.push_back(0);
            }

            res = bigAdd(res, tmp);
        }

        string ress;
        ress.reserve(res.size());
        for (auto& n: res) {
            ress.push_back(char('0' + n));
        }
        return ress;
    }

    vector<int> bigAdd(vector<int>& n1, vector<int>& n2) {

        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());


        vector<int> n3;
        n3.reserve(max(n1.size(),n2.size())+1);

        int jin = 0;
        for (int i = 0; i < max(n1.size(), n2.size());i++) {
            int h = jin;
            if (i < n1.size()) {
                h += n1[i];
            }

            if (i < n2.size()) {
                h += n2[i];
            }

            n3.push_back(h%10);
            jin = h/10;
        }

        if (jin) {
            n3.push_back(1);
        }

        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());
        reverse(n3.begin(), n3.end());
        return n3;
    }

    vector<int> parse(string n) {
        int l = n.size();
        vector<int> ns(l, 0);

        for (int i = 0;i<l;i++) {
            ns[i] = n[i] - int('0');
        }
        return ns;
    }
};