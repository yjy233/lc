#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class MyClass {
  public:
    char *c;
    MyClass(const string &s) {
        c = new char[s.size() + 1];
        strcpy(c, s.c_str());
        cout << "create" << endl;
    }
    ~MyClass() {
        cout << "delete " << string(this->c) << endl;
        delete[] c;
        cout << "destroy" << endl;
    }
};

void show(shared_ptr<MyClass> &ptr) {
    cout << "Inside show function" << endl;
    cout << ptr.use_count() << endl;
    // Function that takes shared ownership of a shared_ptr
}

int main() {

    MyClass *obj = new MyClass("xxx");

    {
        // Create a shared_ptr to MyClass
        shared_ptr<MyClass> sharedPtr1(obj);
        shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
        show(sharedPtr1);
        cout << obj->c << endl;
    }
    // Create another shared_ptr that shares ownership
    // cout << obj->c << endl;
    return 0;
}