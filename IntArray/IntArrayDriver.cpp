#include <iostream>
#include <stdexcept>
#include "IntArray.h"

void outputIntArray1 (IntArray cIntArray) {
	std::cout << cIntArray << std::endl;
}

void outputIntArray2 (IntArray &rcIntArray) {
	std::cout << rcIntArray << std::endl;
}

void outputElement (int val) {
	std::cout << val << std::endl;
}

int main () {
	/* A Copy Constructor may be called for the following cases:

		1) When an object of the class is returned by value.
		2) When an object of the class is passed (to a function) by value as an argument.
		3) When an object is constructed based on another object of the same class.
		4) When the compiler generates a temporary object. */

	try { // testing TODO's 1 through 4
		//IntArray cIntArray1 (5);
		//std::cout << "cIntArray1 Size: " << cIntArray1.size () << std::endl;
		//std::cin >> cIntArray1;		 // enter 1, 2, 3, 4, 5
		//std::cout << cIntArray1 << std::endl;

		//IntArray cIntArray2 (cIntArray1);
		//std::cout << cIntArray1 << std::endl;

		//IntArray cIntArray3 = cIntArray1;
		//std::cout << cIntArray1 << std::endl;

		//outputIntArray1 (cIntArray1);

		//outputIntArray2 (cIntArray1);
	}
	catch (std::runtime_error &e) {
		std::cerr << e.what () << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what () << std::endl;
	}

	try { // testing TODO 5
		//IntArray cIntArraySrc (3), cIntArrayDest1 (3), cIntArrayDest2 (5),
		//	cIntArrayDest3 (1);
		//std::cin >> cIntArraySrc; // enter 1, 2, 3
		//std::cout << cIntArraySrc.size () << ' ' << cIntArrayDest1.size ()
		//	<< ' ' << cIntArrayDest2.size ()
		//	<< ' ' << cIntArrayDest3.size () << std::endl;

		//cIntArrayDest1 = cIntArraySrc;
		//cIntArrayDest2 = cIntArrayDest1;
		//cIntArrayDest3 = cIntArrayDest2;
		//std::cout << cIntArraySrc.size () << ' ' << cIntArrayDest1.size ()
		//	<< ' ' << cIntArrayDest2.size ()
		//	<< ' ' << cIntArrayDest3.size () << std::endl;
		//std::cout << cIntArraySrc << std::endl;
		//std::cout << cIntArrayDest1 << std::endl;
		//std::cout << cIntArrayDest2 << std::endl;
		//std::cout << cIntArrayDest3 << std::endl;
	}
	catch (std::runtime_error &e) {
		std::cerr << e.what () << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what () << std::endl;
	}

	try { // Test TODOs 6 & 7

	}
	catch (std::runtime_error &e) {
		std::cerr << e.what () << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what () << std::endl;
	}

	try { // Test TODOs 8 & 9

	}
	catch (std::runtime_error &e) {
		std::cerr << e.what () << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what () << std::endl;
	}

	try { // Test TODO 10

	}
	catch (std::runtime_error &e) {
		std::cerr << e.what () << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what () << std::endl;
	}
	return EXIT_SUCCESS;
}