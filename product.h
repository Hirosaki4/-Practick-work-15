#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

// ��������� ��� ��������� ���������� ��� �����
struct Product {
    std::string name;
    double price;
    int quantity;
};

// ���� ����� ����� � ������
void addProduct(std::vector<Product>& products, const std::string& name, double price, int quantity);

// ������� ����� �� ������
void removeProduct(std::vector<Product>& products, const std::string& name);

// ��������� ����������� �����
Product findMostExpensive(const std::vector<Product>& products);

// �������� ������� ���� ������
double calculateAveragePrice(const std::vector<Product>& products);

#endif // PRODUCT_H
