#pragma once

/*	Define deallocate memory function (Variable)	*/
void FreeMem(int* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (int)" << std::endl;
}
void FreeMem(float* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (float)" << std::endl;
}
void FreeMem(double* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (double)" << std::endl;
}
void FreeMem(std::string* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (string)" << std::endl;
}
void FreeMem(void* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (void)" << std::endl;
}
void FreeMem(char* _Ptr) {
	delete _Ptr;
	std::cout << "[Debug#FreeMem]: pointer memory deallocated (char)" << std::endl;
}


/*	Define deallocate memory function (Array Variable)	*/
void FreeMemA(int* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (int array)" << std::endl;
}
void FreeMemA(float* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (float array)" << std::endl;
}
void FreeMemA(double* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (double array)" << std::endl;
}
void FreeMemA(std::string* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (string array)" << std::endl;
}
void FreeMemA(void* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (void array)" << std::endl;
}
void FreeMemA(char* _Ptr) {
	delete[] _Ptr;
	std::cout << "[Debug#FreeMemA]: pointer memory deallocated (char array)" << std::endl;
}

/*	Define allocate memory function (Variable)	*/
int* CreateVar(int _int) {
	int* var = new int();
	*var = _int;
	std::cout << "[Debug#CreateVar]: int variable created: '" << *var <<"'" << std::endl;
	return var;
}
float* CreateVar(float _float) {
	float* var = new float();
	*var = _float;
	std::cout << "[Debug#CreateVar]: float variable created: '" << std::fixed << std::setprecision(2) << *var << "'" << std::endl;
	return var;
}
double* CreateVar(double _double) {
	double* var = new double();
	*var = _double;
	std::cout << "[Debug#CreateVar]: double variable created: '" << std::fixed << std::setprecision(2) << *var << "'" << std::endl;
	return var;
}
std::string* CreateVar(std::string _string) {
	std::string* var = new std::string();
	*var = _string;
	std::cout << "[Debug#CreateVar]: string variable created: '" << *var << "'" << std::endl;
	return var;
}
char* CreateVar(char _char) {
	char* var = new char();
	*var = _char;
	std::cout << "[Debug#CreateVar]: char variable created: '" << *var << "'" << std::endl;
	return var;
}

/*	Define allocate memory function (Array Variable)	*/
int* CreateVarIntA(int _elements) {
	if (_elements < 1) {
		std::cout << "[Debug#CreateVarIntA]: failed to create the array (Invalid element number)" << std::endl;
		exit(1);
	}
	else {
		int* var = new int[_elements]();
		std::cout << "[Debug#CreateVarIntA]: int array variable created: '" << _elements << " elements'" << std::endl;
		return var;
	}
}
float* CreateVarFloatA(int _elements) {
	if (_elements < 1) {
		std::cout << "[Debug#CreateVarFloatA]: failed to create the array (Invalid element number)" << std::endl;
		exit(1);
	}
	else {
		float* var = new float[_elements]();
		std::cout << "[Debug#CreateVarFloatA]: float array variable created: '" << _elements << " elements'" << std::endl;
		return var;
	}
}
double* CreateVarDoubleA(int _elements) {
	if (_elements < 1) {
		std::cout << "[Debug#CreateVarDoubleA]: failed to create the array (Invalid element number)" << std::endl;
		exit(1);
	}
	else {
		double* var = new double[_elements]();
		std::cout << "[Debug#CreateVarDoubleA]: double array variable created: '" << _elements << " elements'" << std::endl;
		return var;
	}
}
std::string* CreateVarStringA(int _elements) {
	if (_elements < 1) {
		std::cout << "[Debug#CreateVarStringA]: failed to create the array (Invalid element number)" << std::endl;
		exit(1);
	}
	else {
		std::string* var = new std::string[_elements]();
		std::cout << "[Debug#CreateVarStringA]: string array variable created: '" << _elements << " elements'" << std::endl;
		return var;
	}
}
char* CreateVarCharA(int _elements) {
	if (_elements < 1) {
		std::cout << "[Debug#CreateVarCharA]: failed to create the array (Invalid element number)" << std::endl;
		exit(1);
	}
	else {
		char* var = new char[_elements]();
		std::cout << "[Debug#CreateVarCharA]: char array variable created: '" << _elements << " elements'" << std::endl;
		return var;
	}
}