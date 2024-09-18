#include "Cplusplus_Study.h"

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int Cplusplus_Study::containers() {
    // vector 예제 (동적 배열)
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::cout << "Vector elements: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;


    std::cout << "----------------------" << std::endl;


    // iterator 예제
    std::vector<int> it_numbers = { 3, 2, 5, 1, 4 };
    std::vector<int>::iterator iter = it_numbers.begin();
    std::cout << "First element: " << *iter << "  " << std::endl;

    iter = numbers.end() - 1;
    std::cout << "Last element: " << *iter << std::endl;


    std::cout << "----------------------" << std::endl;


    // list 예제 (이중 연결 리스트)
    std::list<int> list = { 10, 20, 30, 40, 50 };
    std::cout << "List elements: ";
    for (int l : list) {
        std::cout << l << " ";
    }
    std::cout << std::endl;


    std::cout << "----------------------" << std::endl;


    // set 예제 (중복되지 않는 정렬된 집합)
    std::set<int> set = { 100, 200, 300, 100, 400 };
    std::cout << "Set elements (duplicates removed): ";
    for (int s : set) {
        std::cout << s << " ";
    }
    std::cout << std::endl;


    std::cout << "----------------------" << std::endl;


    // map 예제 (키-값 쌍의 연관 컨테이너)
    std::map<std::string, int> map = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };
    std::cout << "Map elements (key-value pairs):" << std::endl;
    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


    std::cout << std::endl << "----- STL_Container.cpp -----" << std::endl << std::endl;


    return 0;
}