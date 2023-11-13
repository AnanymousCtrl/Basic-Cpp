#include <iostream>
using namespace std;

class Father {
	protected:
	    unsigned int age;
	
	public:
	    Father() {
	        age = 60;
	    }
	
	    Father(int x) {
	        age = x;
	    }
	
	    virtual void iam() {
	        cout << "I AM THE FATHER, my age is: " << age << endl;
	    }
};

class Son : public Father {
	public:
	    Son() {
	        age = 30;
	    }
	
	    Son(int x) {
	        age = x;
	    }
	
	    void iam() override {
	        cout << "I AM THE SON, my age is: " << age << endl;
	    }
};

class Daughter : public Father {
	public:
	    Daughter() {
	        age = 24;
	    }
	
	    Daughter(int x) {
	        age = x;
	    }
	
	    void iam() override {
	        cout << "I AM THE DAUGHTER, my age is: " << age << endl;
	    }
};

int main() {
    Father f(50), *ptrf;
    Son s(23);
    Daughter d(16);

    cout << "\n\n CALL BY FATHER OBJECT \n\n";
    f.iam();

    cout << "\n\n CALL BY SON OBJECT \n\n";
    s.iam();

    cout << "\n\n CALL BY DAUGHTER OBJECT \n\n";
    d.iam();

    ptrf = &s;
    cout << "\n\n CALL BY POINTER TO FATHER WITH ADDRESS OF SON OBJECT \n\n";
    ptrf->iam();

    ptrf = &d;
    cout << "\n\n CALL BY POINTER TO FATHER WITH ADDRESS OF DAUGHTER OBJECT \n\n";
    ptrf->iam();

    return 0;
}

