#include <iostream>
#include <Windows.h>
#include "product.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<Product> products = {
        {"�������", 799.99, 10},
        {"�������", 1200.50, 5},
        {"���������", 199.99, 20}
    };

    // �������� ������ ������
    addProduct(products, "�������", 400.00, 7);

    // ��������� ������
    removeProduct(products, "���������");

    // ����������� ������������ ������
    Product expensiveProduct = findMostExpensive(products);
    std::cout << "����������� �����: " << expensiveProduct.name << "\n";
    std::cout << "ֳ��: " << expensiveProduct.price << "\n";
    std::cout << "ʳ������: " << expensiveProduct.quantity << "\n";

    // ���������� �������� ����
    double averagePrice = calculateAveragePrice(products);
    std::cout << "������� ���� ������: " << averagePrice << "\n";

    return 0;
}
