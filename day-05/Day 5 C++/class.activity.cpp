#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Product {

private:

    string productName;
    double price;
    int quantityInStock;

public:


    Product() {
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }



    void setProductName(string name) {
        if (name != "") {
            productName = name;
        }
        else {
            cout << "Product name cannot be empty!" << endl;
        }
    }

    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        }
        else {
            cout << "Price cannot be negative!" << endl;
        }
    }

    void setQuantityInStock(int quantity) {
        if (quantity >= 0) {
            quantityInStock = quantity;
        }
        else {
            cout << "Quantity cannot be negative!" << endl;
        }
    }



    string getProductName() {
        return productName;
    }

    double getPrice() {
        return price;
    }

    int getQuantityInStock() {
        return quantityInStock;
    }

};

int main() {


    Product product1;


    product1.setProductName("Wireless Mouse");
    product1.setPrice(249.99);
    product1.setQuantityInStock(15);


    Product product2;


    product2.setProductName("Computer Keyboard");
    product2.setPrice(399.99);
    product2.setQuantityInStock(20);

    cout << fixed << setprecision(2);

    cout << "===== PRODUCT 1 =====" << endl;

    cout << "Product Name: "
         << product1.getProductName() << endl;

    cout << "Price: R"
         << product1.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product1.getQuantityInStock() << endl;


    cout << "\n===== PRODUCT 2 =====" << endl;

    cout << "Product Name: "
         << product2.getProductName() << endl;

    cout << "Price: R"
         << product2.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product2.getQuantityInStock() << endl;

    return 0;
}

