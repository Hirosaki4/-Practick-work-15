#include <iostream>
#include <Windows.h>
#include "product.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<Product> products = {
        {"Телефон", 799.99, 10},
        {"Ноутбук", 1200.50, 5},
        {"Навушники", 199.99, 20}
    };

    // Введення нового товару
    addProduct(products, "Планшет", 400.00, 7);

    // Видалення товару
    removeProduct(products, "Навушники");

    // Знаходження найдорожчого товару
    Product expensiveProduct = findMostExpensive(products);
    std::cout << "Найдорожчий товар: " << expensiveProduct.name << "\n";
    std::cout << "Ціна: " << expensiveProduct.price << "\n";
    std::cout << "Кількість: " << expensiveProduct.quantity << "\n";

    // Обчислення середньої ціни
    double averagePrice = calculateAveragePrice(products);
    std::cout << "Середня ціна товарів: " << averagePrice << "\n";

    return 0;
}
