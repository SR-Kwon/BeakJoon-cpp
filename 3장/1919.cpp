#include <iostream>
#include <string>

int main() {
    std::string line_a, line_b;
    std::cin >> line_a >> line_b;

    for (auto it_a = line_a.begin(); it_a != line_a.end();) {
        auto found_at_b = line_b.find(*it_a);
        if (found_at_b != std::string::npos) {
            line_a.erase(it_a);
            line_b.erase(found_at_b, 1);
        } else {
            ++it_a;
        }
    }

    std::cout << line_a.size() + line_b.size() << std::endl;

    return 0;
}