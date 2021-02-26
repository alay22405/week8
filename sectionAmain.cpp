#include <iostream>
#include <string>
#include "SectionAHeader.h"

int main() {
    URL url(" https://example.com/");

   
    std::cout << "SCHEME : " << url.getScheme() << "\n";
    std::cout << "AUTHORITY : " << url.getAuthority() << "\n";
    std::cout << "PATH :  " << url.getPath() << "\n";
    std::cout << "URL: " << url.getFullURL() << "/n";
    return 0;


}