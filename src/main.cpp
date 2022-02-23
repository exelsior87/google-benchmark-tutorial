#include <iostream>
#include <vector>

#include "absl/strings/str_join.h"
#include "myfoo.h"


int main(const int argc, const char **argv) {
    print_foo();

    std::vector<std::string> v = {"foo", "bar", "baz"};
    std::string s = absl::StrJoin(v, "-");

    std::cout << s << std::endl;
    
    return 0;
}
