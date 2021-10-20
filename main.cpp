#include <iostream>
int main() {
    std::cout << "Let's learn how C++ source code gets converted into an executable.\n";
    std::cout << "The first stage is preprocessing, which processes all the statements beginning with the '#' sign.\n";

    std::cout << "If you have header files, the preprocessor will replace the 'include' statement with the content of the corresponding file.\n";

    std::cout << "Any macros that the user has defined will be expanded.\n";

    std::cout << "The next step is compilation, which is performed by the compiler.\n";
    std::cout << "The code is checked for the correct syntax. If there are no errors, the code will be converted into object code. A .obj file will also be generated.\n";

    return 0;
}
