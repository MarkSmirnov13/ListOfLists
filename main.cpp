#include "ListOfLists.h"

int main() {
    ListOfLists lists;

    std::ifstream input("test.in");
    std::ofstream output("test.out");

    Interpreter(input, lists, output); // считываем данные из потока ввода и записываем в поток вывода

    input.close();
    output.close();
    return 0;
}