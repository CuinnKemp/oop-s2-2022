#include "AssetPortfolio.h"
#include <iostream>
using namespace std;

int main(){
    AssetPortfolio A1;
    cout << A1.get_num_assets() << A1.has_asset("Milk 2L") << endl;

    AssetPortfolio B1(3);
    Asset a1(2, "Milk 2L");
    Asset b1(50, "Choccy Milk 2L");
    Asset c1(5, "Nice Steak");
    Asset d1(1, "REAL Diamond");

    cout << a1.get_product_type() << ":" << B1.add_asset(a1) << endl;
    cout << b1.get_product_type() << ":" << B1.add_asset(b1) << endl;
    cout << c1.get_product_type() << ":" << B1.add_asset(c1) << endl;
    cout << d1.get_product_type() << ":" << B1.add_asset(d1) << endl;
    
    for (int i = 0; i < B1.get_num_assets(); i++){
        cout << B1.get_assets()[i].get_product_type() << ":" << B1.get_assets()[i].get_value() << endl;
    }

    


}