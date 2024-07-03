#include <iostream>
#include <typeinfo>
#include <string>

//i waiting sage the unicode master.please light me.

int main() {
	auto X = u8"‚ ";

	 std::cout<<typeid(X).name()<<std::endl; //char const* __ptr64. on vc. where is unicode type
	 std::cout<<typeid(X).raw_name()<<std::endl;


	 return 0;
}