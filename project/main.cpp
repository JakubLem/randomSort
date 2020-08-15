#include <iostream>
#include <vector>
using namespace std;

class List{

private:

    vector<int> list;

public:

    List() {}

    int len() {
        return this->list.size();
    }

    void append(int n) {
        this->list.push_back(n);
    }

    ~List() {}
};

int main() {
    return 0;
}