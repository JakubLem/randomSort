#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <ostream>

#define NULL 0

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
        
        for (int j = 0 ; j < this->len() ; j++) {
            result[j] = NULL;
        }
        
        // code
        int random_variable_pointer;
        int sum = 0;
        while (sum != this->len()) {
            cout << "here";
            random_variable_pointer = time(0) % (this->len() % 10);
            cout << random_variable_pointer;
            if (result[random_variable_pointer] != NULL) {
                result[random_variable_pointer] = tab[sum];
                sum++;
            }
            cout << "x";
        }
        // code

        this->list.clear();
        cout << "wyczyszczono tablice";
        for(int j = 0 ; j < this->len() ; j++) {
            this->list.push_back(result[j]);
        }
        cout << "end";
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
    tab.append(1);
    tab.append(2);
    tab.append(3);
    tab.append(4);
    tab.append(5);
    tab.append(6);
    tab.append(7);
    tab.append(8);
    tab.append(9);
    tab.append(10);
    cout << tab;

    tab.random();
    cout << tab;
    return 0;
}