//
// Created by root on 2/26/25.
//

#ifndef HOMEWORK_UTILS_H
#define HOMEWORK_UTILS_H
#ifdef DEBUG
#define log(var) std::cout << __FILE__<<' '<<__LINE__<<':'<<#var<<" : " <<var<<std::endl;
#else
#define log(var)
#endif
#endif //HOMEWORK_UTILS_H
