#include <iomanip>
#include <stdexcept>
#include <new>
#include <initializer_list>

#include "IntArray.h"

IntArray::IntArray (size_t length) {

}

IntArray::IntArray (const IntArray &rcIntArray) {

}

IntArray::~IntArray () {

}

size_t IntArray::size () const {
	return mLength;
}

const IntArray &IntArray::operator= (const IntArray &rcIntArray) {


	return *this;
}

bool IntArray::operator==(const IntArray &rcIntArray) const {
	bool bIsEqual = true;

	return bIsEqual;
}

bool IntArray::operator!=(const IntArray &rcIntArray) const {
	return true;
}

//int &IntArray::operator[](size_t subscript) {
//
//}
//
//int IntArray::operator[](size_t subscript) const {
//	
//}
//
//IntArray::IntArray (std::initializer_list<int> initializerList) {
//
//}

std::istream &operator>> (std::istream &input, IntArray &rcIntArray) {
	for (size_t i = 0; i < rcIntArray.size (); ++i) {
		input >> rcIntArray.mpInt [i];
	}

	return input;
}

std::ostream &operator<< (std::ostream &output, const IntArray &rcIntArray) {
	for (size_t i = 0; i < rcIntArray.size (); ++i) {
		output << rcIntArray.mpInt [i] << "  ";
	}

	return output;
}