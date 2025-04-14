#include <iostream>
#include <functional>

int main() {
    std::hash<std::string> hash_fn;
    
    size_t hash = hash_fn("1");
    std::cout << "Hash of '" <<"' is " << hash << "\n";
    return 0;
}
