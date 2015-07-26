#include <iostream>

using namespace std;

class Super {
protected:
	int storage;
public:
	void put(int val) { storage = val; }
	int get(void) { return storage; }
};

class Sub : public Super {
public:
	void print(void) {
	    cout << this->storage << endl;
	    cout << "storage = " << storage << endl;
    }
};

int main(void) {
	Sub object;

	object.put(100);
	object.put(object.get() + 1);
	object.print();
	//cout << object.storage << endl;
	return 0;
}
