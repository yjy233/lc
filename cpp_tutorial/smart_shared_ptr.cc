#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class MyClass {
  public:
    int *data;
    MyClass() {
        data = new int[100];
        cout << "create" << endl;
    }
    ~MyClass() {
        delete[] data;
        cout << "destroy" << endl;
    }
};

void show(shared_ptr<MyClass> ptr) {
    cout << "Inside show function" << endl;
    // Function that takes shared ownership of a shared_ptr
}

int main() {
    // Create a shared_ptr to MyClass
    shared_ptr<MyClass> sharedPtr1(new MyClass());
    show(sharedPtr1);

    // Create another shared_ptr that shares ownership
    shared_ptr<MyClass> sharedPtr2 = sharedPtr1;

    cout << "Reference count: " << sharedPtr1.use_count() << endl; // Should be 2

    return 0;
}