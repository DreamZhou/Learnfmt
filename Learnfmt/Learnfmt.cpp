// Learnfmt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "fmt/time.h"
using namespace fmt::literals;

int main()
{
    fmt::print("Hello fmt\n");
    //Accessing argument by position
    fmt::print("{0}, {1}, {2}\n", 'a', 'b', 'c');
    fmt::print("{}, {}, {}\n", '1', '2', '3');
    fmt::print("{2}, {1}, {0}\n", '1', '2', '3');          // 从0 开始计数
    fmt::print("{0}{1}{0}\n", "abra", "cad");              //arguments' indices can be repeated
    
    //Aligning the text and specifying a withd
    fmt::print("{:<30}\n", "left aligned");
    fmt::print("{:>30}\n", "right aligned");
    fmt::print("{:^30}\n", "centerd");
    fmt::print("{:*^30}\n", "centerd");                      //use "*" as default fill char
    fmt::print("{:8^30}\n", "centerd");

	//supports positional argument 
	fmt::print("I'd rather be {1} than {0}.\n", "right", "happy");

	//Named arguments can be created with fmt::arg
	fmt::print("Hello, {name}! The answer is {number}. Goodbye,{name}!\n", fmt::arg("name", "World"), fmt::arg("number", 42));

	//_format suffix 
	std::string message = "{0} {1} {0}\n"_format("abra", "cad");
	fmt::print("Elapsed time {s:2f}!\n","s"_a=1.53);
	fmt::print(message);

	auto fm0=fmt::format("begin**********fmt::format**********");
	auto fm1=fmt::format("{0}, {1}, {2}\n", "a", 'b', 'c');
	fmt::print(fm0);
	fmt::print(fm1);

	fmt::MemoryWriter w;
	w.write("Look, a {} sting", 'C');
	fmt::print(w.c_str());
	
	//Date and time formatting
	std::time_t t = std::time(nullptr);
	fmt::print("The date is {:%Y-%m-%d}\n", *std::localtime(&t));

	fmt::print(stderr, "System error code = {}", errno);
    getchar();
    return 0;
}

