//
// Created by root on 2/26/25.
//

#ifndef HOMEWORK_UTILS_H
#define HOMEWORK_UTILS_H

//#define TEST_BEGIN int main() {
//#define TEST(func) int result_##func = func();if(result_##func)std::cout<<#func<<" failed"<<std::endl;else std::cout<<#func<<" passed"<<std::endl;
//#define TEST_END return 0;}

#define ASSERT(expr) if(!(expr)){std::cout<<"assert: "<<#expr<<" failed"<<std::endl; return 1;}

#endif //HOMEWORK_UTILS_H
