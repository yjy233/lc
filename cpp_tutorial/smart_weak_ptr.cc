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

class MyClassV2 : public MyClass {
  public:
    int *data;
    MyClassV2(const string &s, int a) : MyClass(s) {
        data = new int(a);
        cout << "MyClassV2 create" << endl;
    }
    ~MyClassV2() {
        cout << "MyClassV2 destroy" << endl;
    }
};

void show(shared_ptr<MyClass> &ptr) {
    cout << "Inside show function" << endl;
    cout << ptr.use_count() << endl;
    // Function that takes shared ownership of a shared_ptr
}

int main() {

    auto sptr = make_shared<MyClass>("example");

    auto wPtr = weak_ptr<MyClass>(sptr);

    cout << "Use count before lock: " << wPtr.use_count() << endl;
    cout << "Use count before lock v1: " << sptr.use_count() << endl;

    {
        auto sptrv2 = wPtr.lock(); // Convert weak_ptr to shared_ptr
        cout << "Use count before lock v3: " << sptr.use_count() << endl;
    }

    cout << "Use count before lock v4: " << sptr.use_count() << endl;

    return 0;
}