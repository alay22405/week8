#include <iostream>
#include <string>
#include "SectionAHeader.h"



URL::URL(std::string urlString)
	: myURL{ urlString } {}

std::string URL::getURL()
{
	return myURL;
}

std::string URL::getScheme()
{
	std::string scheme = myURL.substr(0, myURL.find_first_of("/"));

	return scheme;
}

std::string URL::getAuthority()
{
	int index = 0;
	int forwardslash_count = 0;

	for (int i = 0; i < myURL.length(); i++) {
		if (myURL[i] == '/') {
			forwardslash_count++;
		}
		if (forwardslash_count == 3) {
			break;
		}
		index++;
	}

	std::string authority = myURL.substr(myURL.find_first_of(":") + 1, (index - myURL.find_first_of(":") - 1));

	return authority;
}

std::string URL::getPath()
{
	int index = 0;
	int forwardslash_count = 0;

	for (int i = 0; i < myURL.length(); i++) {
		if (myURL[i] == '/') {
			forwardslash_count++;
		}
		if (forwardslash_count == 3) {
			break;
		}
		index++;
	}

	std::string path = myURL.substr((index), (myURL.length() - (index - 1)));

	return path;

}

int main() {
	URL url(" https://example.com/");


	std::cout << "SCHEME : " << url.getScheme() << "\n";
	std::cout << "AUTHORITY : " << url.getAuthority() << "\n";
	std::cout << "PATH :  " << url.getPath() << "\n";
	std::cout << "URL: " << url.getURL() << "/n";
	return 0;


}

