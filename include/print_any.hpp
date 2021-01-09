// Copyright 2020 gnole
#ifndef INCLUDE_PRINT_ANY_HPP_
#define INCLUDE_PRINT_ANY_HPP_
#include <any>
#include <string>

std::ostream& operator <<(std::ostream &os, const std::any& object);
std::stringstream print_any(const std::any& object);
#endif  // INCLUDE_PRINT_ANY_HPP_
