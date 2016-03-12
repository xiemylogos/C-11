//Copyright (C) 2016 All rights reserved.
//FileName：test_std_move.cc
//Author:xiemylogos
//CreateDate：2016年03月12日
//Describe:

#include <iostream>
#include <vector>

int main()
{
  std::string  str="move";
  std::vector<std::string> vec_str;
  vec_str.push_back(std::move(str));
  
  std::cout<<"size:"<<vec_str[0]<<std::endl;
  return  0;
}
