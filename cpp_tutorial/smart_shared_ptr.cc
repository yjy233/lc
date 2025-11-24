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

    {
        MyClass *obj = new MyClass("xxx");
        // Create a shared_ptr to MyClass
        shared_ptr<MyClass> sharedPtr1(obj);
        shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
        show(sharedPtr1);
        cout << obj->c << endl;
    }
    // Create another shared_ptr that shares ownership
    // cout << obj->c << endl;

    {
        vector<shared_ptr<MyClass>> vec;
        vec.push_back(make_shared<MyClass>("hello"));
        vec.push_back(make_shared<MyClass>("world"));

        vector<shared_ptr<MyClass>> vec2;
        remove_copy_if(
            vec.begin(), vec.end(),
            back_inserter(vec2),
            [](const shared_ptr<MyClass> &item) {
                return string(item->c) == "hello";
            });

        for (const auto &s : vec2) {
            wcout << s->c << "  xxxfewfewf " << endl;
        }
    }

    {
        shared_ptr<MyClassV2> vec = make_shared<MyClassV2>("test", 100);

        shared_ptr<MyClass> basePtr = dynamic_pointer_cast<MyClass>(vec);

        cout << basePtr->c << endl;
    }

    return 0;
}