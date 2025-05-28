//
// Created by root on 2/26/25.
//

#ifndef HOMEWORK_UTILS_H
#define HOMEWORK_UTILS_H

//#define TEST_BEGIN int main() {
//#define TEST(func) int result_##func = func();if(result_##func)std::cout<<#func<<" failed"<<std::endl;else std::cout<<#func<<" passed"<<std::endl;
//#define TEST_END return 0;}

#define assert(expr1,expr2) { \
    auto __1 = expr1; \
    auto __2 = expr2; \
    if (__1 == __2) { \
        std::cout << "assert: " << #expr1 << " equals " << __2 << " passed" << std::endl; \
    } else { \
        std::cout << "assert failed: expected: " << __2 << " but got: " << __1 << std::endl; \
        throw std::runtime_error("assert failed"); \
    } \
}
#endif //HOMEWORK_UTILS_H
