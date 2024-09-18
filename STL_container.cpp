#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int main() {
    // 1. vector ���� (���� �迭)
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::cout << "Vector elements: ";
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // 2. list ���� (���� ���� ����Ʈ)
    std::list<int> lst = { 10, 20, 30, 40, 50 };
    std::cout << "List elements: ";
    for (int l : lst) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    // 3. set ���� (�ߺ����� �ʴ� ���ĵ� ����)
    std::set<int> mySet = { 100, 200, 300, 100, 400 };
    std::cout << "Set elements (duplicates removed): ";
    for (int s : mySet) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // 4. map ���� (Ű-�� ���� ���� �����̳�)
    std::map<std::string, int> myMap = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };
    std::cout << "Map elements (key-value pairs):" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}