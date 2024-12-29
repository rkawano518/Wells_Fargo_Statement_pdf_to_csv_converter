/**
 * @file exception_rk.cpp
 * @brief Source file for the custom Exception class.
 */
#include "exception_rk.h"

Exception::Exception(const std::string& msg) : message(msg) {}

const char* Exception::what() const noexcept {
    return message.c_str();
}