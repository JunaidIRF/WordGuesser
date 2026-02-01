#include "utils.h"
#include <msclr/marshal_cppstd.h>

std::string to_string(System::String^ s)
{
	return msclr::interop::marshal_as<std::string>(s);
}

System::String^ to_String(std::string s)
{
	return gcnew System::String(s.c_str());
}