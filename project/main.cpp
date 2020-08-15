#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <ostream>

using namespace std;

int abs(int n) {
    if (n < 0) {
        return -1*n;
    }
    return n;
}


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

    void random() {
        int * tab = new int[this->len()];
        int i = 0;
        for(auto obj: this->list){
            tab[i] = obj;
            i++;
        }
        int * result = new int[this->len()];

        // code

        // code

        this->list.clear();
        for(int j = 0 ; j < this->len() ; j++) {
            this->list.push_back(result[j]);
        }
    }

    friend ostream& operator<<(ostream& os, const List& obj);
    

    ~List() {}
};

ostream& operator<<(ostream& os, const List& obj) {
    os << endl << " ( ";
    for(auto elem: obj.list) {
        os << elem << ", ";
    }
    os << " ) " << endl;
    return os;
}

int main() {
    List tab = List();
    tab.append(5);
    tab.append(4);
    cout << tab;

    time_t t = time(0);  
    cout << t << endl;
    return 0;
}