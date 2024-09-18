#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int main() {
    // 1. vector 예제 (동적 배열)
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::cout << "Vector elements: ";
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // 2. list 예제 (이중 연결 리스트)
    std::list<int> lst = { 10, 20, 30, 40, 50 };
    std::cout << "List elements: ";
    for (int l : lst) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    // 3. set 예제 (중복되지 않는 정렬된 집합)
    std::set<int> mySet = { 100, 200, 300, 100, 400 };
    std::cout << "Set elements (duplicates removed): ";
    for (int s : mySet) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // 4. map 예제 (키-값 쌍의 연관 컨테이너)
    std::map<std::string, int> myMap = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };
    std::cout << "Map elements (key-value pairs):" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}