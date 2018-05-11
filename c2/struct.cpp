#include <iostream>
#include <string>
#include "Sales_data.h"




int main(){
    Sales_data data1, data2;
    double price = 0;
    std::cout << "book1 No.: ";
    std::cin >> data1.bookNo;
    std::cout << "book1 units sold: ";
    std::cin >> data1.units_sold;
    std::cout << "book1 price: ";
    std::cin >> data1.price;
    data1.revenue = data1.units_sold * data1.price;

    std::cout << "book2 No.: ";
    std::cin >> data2.bookNo;
    std::cout << "book2 units sold: ";
    std::cin >> data2.units_sold;
    std::cout << "book2 price: ";
    std::cin >> data2.price;
    data2.revenue = data2.units_sold * data2.price;

    if(data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalCnt
            << " " << totalRevenue << " ";
        if(totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }


    return 0;
}