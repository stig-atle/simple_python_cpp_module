#include <string>
#include "Source.h"
#include <pybind11/pybind11.h>
namespace py = pybind11;

namespace { // Avoid cluttering the global namespace.

  // A couple of simple C++ functions that we want to expose to Python.
    std::string greet() { return "Hello from c++ in python, made as a module."; }
    int add(int i, int j) {
        return i + j;
    }
}

PYBIND11_MODULE(MyPythonModule, m) {
    m.doc() = "pybind11 example module"; // optional module docstring
    m.def("greet", &greet, "A function That prints to the screen");
}