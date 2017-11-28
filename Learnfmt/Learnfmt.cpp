// Learnfmt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


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


    getchar();
    return 0;
}

