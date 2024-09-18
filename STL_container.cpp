#include "Cplusplus_Study.h"

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int Cplusplus_Study::containers() {
    // vector 예제 (동적 배열)
    std::vector<int> v_numbers = { 1, 2, 3, 4, 5 };
    std::cout << "Vector elements: ";
    for (int number : v_numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // 인덱스를 이용한 접근
    std::cout << "vec[2]: " << v_numbers[2] << std::endl;

    // `at()` 메소드를 이용한 접근 (범위 검사 포함)
    std::cout << "vec.at(3): " << v_numbers.at(3) << std::endl;

    // 반복자를 이용한 접근
    std::cout << "First element using iterator: " << *v_numbers.begin() << std::endl;


    std::cout << "----------vector----------" << std::endl;


    // iterator 예제
    std::vector<int> it_numbers = { 3, 2, 5, 1, 4 };
    std::vector<int>::iterator it_iter = it_numbers.begin();
    std::cout << "First element: " << *it_iter << "  " << std::endl;

    it_iter = it_numbers.end() - 1;
    std::cout << "Last element: " << *it_iter << std::endl;


    std::cout << "----------iterator----------" << std::endl;


    // list 예제 (이중 연결 리스트)
    std::list<int> l_list = { 10, 20, 30, 40, 50 };
    std::cout << "List elements: ";
    for (int l : l_list) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    // 반복자를 이용한 첫 번째 요소 접근
    std::list<int>::iterator l_iter = l_list.begin();
    std::cout << "First element: " << *l_iter << std::endl;

    // 반복자를 이용한 두 번째 요소 접근
    std::advance(l_iter, 1); // 반복자 1칸 전진
    std::cout << "Second element: " << *l_iter << std::endl;


    std::cout << "----------list----------" << std::endl;


    // set 예제 (중복되지 않는 정렬된 집합)
    std::set<int> s_set = { 100, 200, 300, 100, 400 };
    std::cout << "Set elements (duplicates removed): ";
    for (int s : s_set) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // 반복자를 이용한 첫 번째 요소 접근
    std::set<int>::iterator s_iter = s_set.begin();
    std::cout << "First element: " << *s_iter << std::endl;

    // 세 번째 요소에 접근 (반복자를 이용)
    std::advance(s_iter, 2);
    std::cout << "Third element: " << *s_iter << std::endl;


    std::cout << "----------set----------" << std::endl;


    // map 예제 (키-값 쌍의 연관 컨테이너)
    std::map<std::string, int> m_map = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };
    std::cout << "Map elements (key-value pairs):" << std::endl;
    for (const auto& pair : m_map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 키를 이용한 값 접근
    std::cout << "Value for 'banana': " << m_map["banana"] << std::endl;

    // `at()` 메소드를 사용한 값 접근
    std::cout << "Value for 'apple': " << m_map.at("apple") << std::endl;

    // 반복자를 사용하여 값에 접근
    std::map<std::string, int>::iterator m_iter = m_map.find("cherry");
    if (m_iter != m_map.end()) {
        std::cout << "Value for 'cherry' using iterator: " << m_iter->second << std::endl;
    }


    std::cout << std::endl << "---------- STL_Container.cpp ----------" << std::endl << std::endl;


    return 0;
}