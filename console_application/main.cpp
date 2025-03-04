#include <iostream>
#include "lib.h"
#include "argparse.hpp"

#define PARSE  try {\
        program.parse_args(argc, argv);\
    }\
    catch (const std::exception& err) {\
        std::cerr << err.what() << std::endl;\
        std::cerr << program;\
        return 1;\
    }\


int main(int argc, char *argv[]) {


    return 0;
}
