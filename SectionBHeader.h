#pragma once

#include <string>

class image {
public:
	image(std::string FileName, std::string ImageType, std::string DateCreated, double Size, std::string AuthorName, std::string ImageDimensions, std::string ApertureSize, std::string ExposureTime, int ISOvalue, bool FlashEnabled);

	std::string getFileName();
	std::string getImageType();
	std::string getDateCreated();
	double getSize();
	std::string getAuthorName();
	std::string getImageDimensions();
	std::string getApertureSize();
	std::string getExposureTime();
	int getISOvalue();
	bool getFlashEnabled();

	void setFileName(std::string FileName);
	void setImageType(std::string ImageType);
	void setDateCreated(std::string DateCreated);
	void setSize(double Size);
	void setAuthorName(std::string AuthorName);
	void setImageDimensions(std::string ImageDimensions);
	void setApertureSize(std::string ApertureSize);
	void setExposureTime(std::string ExposureTime);
	void setISOvalue(int ISOvalue);
	void setFlashEnabled(bool FlashEnabled);

private:
	std::string FileName;
	std::string ImageType;
	std::string DateCreated;
	double Size;
	std::string AuthorName;
	std::string ImageDimensions;
	std::string ApertureSize;
	std::string ExposureTime;
	int ISOvalue;
	bool FlashEnabled;
};

void printImageMetadata(image image);
