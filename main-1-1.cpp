#include "Asset.h"
#include <iostream>
using namespace std;

int main(){
    Asset a1;

    cout << a1.get_product_type() << "    " << a1.get_value() << endl;

    Asset b1(4, "Milk 2L");

    cout << b1.get_product_type() << "    " << b1.get_value() << endl;

    return 0;
}