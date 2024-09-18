#include "Cplusplus_Study.h"

#include <iostream>
#include <algorithm>
#include <vector>

int Cplusplus_Study::sorting() {
    // 벡터 타입 정렬 예제
    std::vector<int> numbers = { 3, 2, 5, 1, 4 };

    // 오름차순으로 벡터 요소 정렬
    sort(numbers.begin(), numbers.end());

    for (int number : numbers) {
        std::cout << number << "  ";
    }
    std::cout << std::endl;


    std::cout << std::endl << "---------- Sotring_Algorithm.cpp ----------" << std::endl << std::endl;

    return 0;
}