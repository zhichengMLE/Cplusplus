#include <iostream>

namespace newnamespace{
    int var1 = 1;
    int var2 = 2;
    int var3 = 3;
    std::string str1 = "string 1";

    void foo(){
        std::cout << "foo" << std::endl;
    }

    void bar(std::string str){
        std::cout << str << std::endl;
    }
}

int main() {
    using namespace std;
    std::cout << "Namespace Test" << std::endl;

    std::cout << newnamespace::var1 << std::endl;
    std::cout << newnamespace::var2 << std::endl;
    std::cout << newnamespace::var3 << std::endl;

    // foo(); // foo doesn't define.

    newnamespace::foo();
    newnamespace::bar("bar");

    std::cout << "-----------------" << std::endl;

    using namespace newnamespace;
    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl;
    std::cout << var3 << std::endl;
    foo();
    bar("bar");


    return 0;
}


/*
>>
Namespace Test
1
2
3
foo
bar
-----------------
1
2
3
foo
bar

Process finished with exit code 0

*/
