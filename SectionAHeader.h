#include <iostream>
#include <string>


class URL {
private:


    std::string scheme;
    std::string authority;
    std::string path;

public:
    URL(std::string url) {
        int first = url.find(":");
        scheme = url.substr(0, first);
        std::string restUrl = url.substr(first + 3, url.length());
        int thirdIndex = restUrl.find("/");
        authority = url.substr(first + 3, thirdIndex);
        path = restUrl.substr(thirdIndex, url.length());

    }
    std::string getAuthority() {
        return authority;
    }
    std::string getScheme() {
        return scheme;
    }
   
    std::string getPath() {
        return path;
    }
    std::string getFullURL() {
        return scheme + "://" + authority + path;
    }
};








