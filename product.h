#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

// Структура для зберігання інформації про товар
struct Product {
    std::string name;
    double price;
    int quantity;
};

// Додає новий товар у вектор
void addProduct(std::vector<Product>& products, const std::string& name, double price, int quantity);

// Видаляє товар за назвою
void removeProduct(std::vector<Product>& products, const std::string& name);

// Знаходить найдорожчий товар
Product findMostExpensive(const std::vector<Product>& products);

// Обчислює середню ціну товарів
double calculateAveragePrice(const std::vector<Product>& products);

#endif // PRODUCT_H
