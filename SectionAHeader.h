#pragma once
#include <string>

class URL {


public:
	URL(std::string urlString);

	std::string getURL();
	std::string getScheme();
	std::string getAuthority();
	std::string getPath();

private:


	std::string myURL;


};