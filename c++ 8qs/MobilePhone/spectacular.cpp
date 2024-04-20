/* 
Spectacular mart is an online Shop from a wide range of laptops, cameras, watches like products from top brands at the best prices.
Create an application for spectacular mart to maintain the data of customer and product.
--- Create class Product with data members as id, product_name, price
     [Example of product_name=watch  price=4400]
--- Create a class Person with data member name.
--- Create a class customer with data members as mobile, purchasedProducts.
Each customer buy few products.
Do the proper relationships in between above classes.
Write a menu driven code which will have below menus
1. Display all products
2. New Customer
3. New product
3. Customer purchase the product
4. Take the customer mobile number from user and display products brought by that specific customer
*/

#include <iostream>
#include <string>

using namespace std;

// Class to represent a product
class Product {
public:
    int id;
    string product_name;
    double price;

    Product(int _id, string _product_name, double _price) : id(_id), product_name(_product_name), price(_price) {}
};

// Class to represent a person
class Person {
public:
    string name;

    Person(string _name) : name(_name) {}
};

// Class to represent a customer
class Customer : public Person {
public:
    string mobile;
    Product* purchasedProducts[100];
    int purchasedCount;

    Customer(string _name, string _mobile) : Person(_name), mobile(_mobile), purchasedCount(0) {}

    void purchaseProduct(Product* product) {
        purchasedProducts[purchasedCount++] = product;
    }

    void displayPurchasedProducts() {
        cout << "Products purchased by customer " << name << " (Mobile: " << mobile << "):" << endl;
        for (int i = 0; i < purchasedCount; ++i) {
            cout << "ID: " << purchasedProducts[i]->id << ", Product Name: " << purchasedProducts[i]->product_name << ", Price: $" << purchasedProducts[i]->price << endl;
        }
    }
};

// Class to represent Spectacular Mart
class SpectacularMart {
private:
    Product* products[100];
    int productCount;
    Customer* customers[100];
    int customerCount;

public:
    SpectacularMart() : productCount(0), customerCount(0) {}

    // Add new product to Spectacular Mart
    void addProduct(string product_name, double price) {
        products[productCount++] = new Product(productCount, product_name, price);
    }

    // Add new customer to Spectacular Mart
    void addCustomer(string name, string mobile) {
        customers[customerCount++] = new Customer(name, mobile);
    }

    // Customer purchases a product
    void customerPurchase(string mobile, int productId) {
        Customer* customer = findCustomerByMobile(mobile);
        if (customer != nullptr && productId >= 1 && productId <= productCount) {
            customer->purchaseProduct(products[productId - 1]);
            cout << "Product purchased successfully!" << endl;
        } else {
            cout << "Customer not found or invalid product ID." << endl;
        }
    }

    // Display all products
    void displayAllProducts() {
        cout << "Products available at Spectacular Mart:" << endl;
        for (int i = 0; i < productCount; ++i) {
            cout << "ID: " << products[i]->id << ", Product Name: " << products[i]->product_name << ", Price: $" << products[i]->price << endl;
        }
    }

    // Display products purchased by a specific customer
    void displayCustomerPurchases(string mobile) {
        Customer* customer = findCustomerByMobile(mobile);
        if (customer != nullptr) {
            customer->displayPurchasedProducts();
        } else {
            cout << "Customer not found." << endl;
        }
    }

private:
    // Helper function to find customer by mobile number
    Customer* findCustomerByMobile(string mobile) {
        for (int i = 0; i < customerCount; ++i) {
            if (customers[i]->mobile == mobile) {
                return customers[i];
            }
        }
        return nullptr;
    }
};

int main() {
    SpectacularMart mart;

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Display all products" << endl;
        cout << "2. New Customer" << endl;
        cout << "3. New product" << endl;
        cout << "4. Customer purchase the product" << endl;
        cout << "5. Display products bought by a specific customer" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                mart.displayAllProducts();
                break;
            case 2:
                {
                    string name, mobile;
                    cout << "Enter customer name: ";
                    cin >> name;
                    cout << "Enter customer mobile number: ";
                    cin >> mobile;
                    mart.addCustomer(name, mobile);
                    cout << "Customer added successfully!" << endl;
                }
                break;
            case 3:
                {
                    string name;
                    double price;
                    cout << "Enter product name: ";
                    cin >> name;
                    cout << "Enter product price: ";
                    cin >> price;
                    mart.addProduct(name, price);
                    cout << "Product added successfully!" << endl;
                }
                break;
            case 4:
                {
                    string mobile;
                    int productId;
                    cout << "Enter customer mobile number: ";
                    cin >> mobile;
                    cout << "Enter product ID to purchase: ";
                    cin >> productId;
                    mart.customerPurchase(mobile, productId);
                }
                break;
            case 5:
                {
                    string mobile;
                    cout << "Enter customer mobile number: ";
                    cin >> mobile;
                    mart.displayCustomerPurchases(mobile);
                }
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
