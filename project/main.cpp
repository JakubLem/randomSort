#include <iostream>
#include <vector>
#include <ostream>
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
    friend ostream& operator<<(ostream& os, const List& obj);
    

    ~List() {}
};

ostream& operator<<(ostream& os, const List& obj)
{
    os << " ( ";
    for(auto elem: obj.list){
        os << elem << ", ";
    }
    os << " ) ";
    return os;
}

int main() {
    List tab = List();
    tab.append(5);
    tab.append(4);
    cout << tab;
    return 0;
}