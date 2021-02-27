#include <iostream>
#include "SectionBHeader.h"


	
	std::string image::getFileName()
	{
		return FileName;
	}

	std::string image::getImageType()
	{
		if (ImageType == "PNG" || ImageType == "GIF" || ImageType == "JPEG") {
			return ImageType;
		}
		else {
			return "Nonvalid image type";
		}
	}

	std::string image::getDateCreated()
	{
		return DateCreated;
	}

	double image::getSize()
	{
		return Size;
	}

	std::string image::getAuthorName()
	{
		return AuthorName;
	}

	std::string image::getImageDimensions()
	{
		return ImageDimensions;
	}

	std::string image::getApertureSize()
	{
		return ApertureSize;
	}

	std::string image::getExposureTime()
	{
		return ExposureTime;
	}

	int image::getISOvalue()
	{
		return ISOvalue;
	}

	bool image::getFlashEnabled()
	{
		return FlashEnabled;
	}

	void image::setFileName(std::string FileName) {
		FileName = FileName;
	}

	void image::setImageType(std::string ImageType) {
		if (ImageType == "PNG" || ImageType == "GIF" || ImageType == "JPEG") {
			ImageType = ImageType;
		}
		else {
			std::cout << "Nonvalid image type." << "\n";
		}

	}

	void image::setDateCreated(std::string DateCreated) {
		DateCreated = DateCreated;
	}

	void image::setSize(double Size) {
		Size = Size;
	}

	void image::setAuthorName(std::string AuthorName) {
		AuthorName = AuthorName;
	}

	void image::setImageDimensions(std::string ImageDimensions) {
		ImageDimensions = ImageDimensions;
	}

	void image::setApertureSize(std::string ApertureSize) {
		ApertureSize = ApertureSize;
	}

	void image::setExposureTime(std::string ExposureTime) {
		ExposureTime = ExposureTime;
	}

	void image::setISOvalue(int ISOvalue) {
		ISOvalue = ISOvalue;
	}

	void image::setFlashEnabled(bool FlashEnabled) {
		FlashEnabled = FlashEnabled;
	}

	void printImageMetadata(image image)
	{
		std::cout << "File Name: " << image.getFileName() << "\n";
		std::cout << "Image Type: " << image.getImageType() << "\n";
		std::cout << "Date Created: " << image.getDateCreated() << "\n";
		std::cout << "Size: " << image.getSize() << " MB" << "\n";
		std::cout << "Author Name: " << image.getAuthorName() << "\n";
		std::cout << "Image Dimensions: " << image.getImageDimensions() << "\n";
		std::cout << "Aperture Size: " << image.getApertureSize() << "\n";
		std::cout << "Exposure Time: " << image.getExposureTime() << "\n";
		std::cout << "ISO value: " << image.getISOvalue() << "\n";
		std::cout << "Flash Enabled: " << image.getFlashEnabled() << "\n";

	}


