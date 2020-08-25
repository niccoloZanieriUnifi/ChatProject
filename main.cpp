#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> a = std::make_shared<int>(2);
    auto b = a;
}
