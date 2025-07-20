#include <iostream>
//namespaces create diffrent versions od the same veriable
namespace first{
    int x = 2;
}
namespace second{
    int x = 6;
}


 int main()
 {
    using namespace first;//makes it use the value from that namespace

    std::cout << x << '\n';
    return 0;
 }
 