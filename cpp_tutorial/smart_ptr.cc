#include <iostream>
#include <memory>
using namespace std;

class MyClass {
  public:
    int *data;
    char *c;
    MyClass() : data(nullptr), c(nullptr) {
        data = new int[100];
        cout << "create" << endl;
    }
    MyClass(const string &s) : data(nullptr), c(nullptr) {
        c = new char[s.size()];
        strcpy(c, s.c_str());
        cout << "copy constructor" << endl;
    }
    ~MyClass() {
        delete[] data;
        cout << "delete " << string(this->c) << endl;
        cout << "destroy" << endl;
    }
};

void show(unique_ptr<MyClass> &ptr) {
    cout << "Inside show function" << endl;
    // Function that takes ownership of a unique_ptr
}
int main() {
    // Create a unique_ptr to an integerå
    unique_ptr<MyClass> uniquePtr(new MyClass());
    show(uniquePtr);

    // Transfer ownership to another unique_ptr
    unique_ptr<MyClass> anotherUniquePtr = move(uniquePtr);

    cout << anotherUniquePtr.get()->data[0] << endl; // Should be nullptr

    // Create a shared_ptr to an integer
    // std::shared_ptr<int> sharedPtr1(new int(100));

    // Create another shared_ptr that shares ownership
    // std::shared_ptr<int> sharedPtr2 = sharedPtr1;

    vector<unique_ptr<MyClass>> vec;
    vec.push_back(make_unique<MyClass>("hello"));
    vec.push_back(make_unique<MyClass>("world"));
    for (const auto &item : vec) {
        cout << item->c << endl;
    }
    return 0;
}