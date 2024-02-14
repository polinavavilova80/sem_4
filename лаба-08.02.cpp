#include <iostream>
using namespace std;

class cashRegister { // класс кассы
private:
    int cashOnHand;
public:
    cashRegister() {
        cashOnHand = 500; //текущий баланс 
    }
    cashRegister(int cash) {
        cashOnHand = cash;
    }
    int getCurrentBalance() {
        return cashOnHand;
    }
    void acceptAmount(int amount) {
        cashOnHand = cashOnHand + amount;
    }
};

class dispenserType { // класс представляющий тип товара 
private:
    int numberOfItems; // количества товара 
    int cost;
public:
    dispenserType() {
        cost = 50;
        numberOfItems = 50;
    }
    dispenserType(int setCost, int setNoOfItems) {
        cost = setCost;
        numberOfItems = setNoOfItems;
    }
    int getNoOfItems() {
        return numberOfItems;
    }
    int getCost() {
        return cost;
    }
    void makeSale() {
        numberOfItems--;
    }
};

void showSelection() { //функция отображения доступных товаров для покупки 
   std:: cout << "1. Candy" << std::endl;
   std:: cout << "2. Chips" << std::endl;
   std:: cout << "3. Gum" << std::endl;
   std:: cout << "4. Cookies" << std:: endl;
}

void sellProduct(dispenserType& product, cashRegister& reg) {// функция  продажи выбранного товара 
    int choice;
    std::cout << "Enter the choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            if (product.getNoOfItems() > 0) {
                std::cout << "Your price is: $" << product.getCost() << std::endl;
                std::cout << "Please deposit the money" << std:: endl;
                int amount;
                std::cin >> amount;
                if (amount >= product.getCost()) {
                    product.makeSale();
                    reg.acceptAmount(product.getCost());
                    std::cout << "Thank you for the purchase" << std::endl;
                } else {
                    std::cout << "Insufficient amount" << std:: endl;
                }
            } else {
               std::  cout << "No more left." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }
}

int main() { // создает обЪект candy и register,потом отображает список доступных товаров и процесс продажи 
    dispenserType candy(30, 20);
    cashRegister moneyregister(1000);

    showSelection();
    sellProduct(candy, moneyregister);

    return 0;
}