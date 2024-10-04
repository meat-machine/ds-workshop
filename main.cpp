#include <iostream>
#include <list>
#include <iterator> 
#include <cstdlib>  

int main(int argc, char* argv[]) {

    std::list<int> intList;

    for (int i = 1; i < argc; ++i) {
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    std::list<int>::reverse_iterator rit = intList.rbegin();
    while (rit != intList.rend()) {
        std::cout << *rit << std::endl;
        rit++;
    }

    return 0;
}