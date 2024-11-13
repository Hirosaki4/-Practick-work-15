#include "product.h"
#include <algorithm>
#include <numeric>

void addProduct(std::vector<Product>& products, const std::string& name, double price, int quantity) {
    products.push_back({ name, price, quantity });
}

void removeProduct(std::vector<Product>& products, const std::string& name) {
    products.erase(std::remove_if(products.begin(), products.end(),
        [&](const Product& product) { return product.name == name; }),
        products.end());
}

Product findMostExpensive(const std::vector<Product>& products) {
    return *std::max_element(products.begin(), products.end(),
        [](const Product& a, const Product& b) { return a.price < b.price; });
}

double calculateAveragePrice(const std::vector<Product>& products) {
    if (products.empty()) return 0.0;
    double total = std::accumulate(products.begin(), products.end(), 0.0,
        [](double sum, const Product& product) { return sum + product.price; });
    return total / products.size();
}
