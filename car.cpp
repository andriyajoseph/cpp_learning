
#include <iostream>
using namespace std;

    class car {
        public:
            string brand;
            string model;
            int year;
    };
 int main()
 {
    car c1;

    c1.brand = "Porsche";
    c1.model = "911"; 
    c1.year = 2023;

    cout << "brand: " << c1.brand << endl;
    cout << "model: " << c1.model << endl;
    cout << "year: " << c1.year << endl;

    return 0; 
}

