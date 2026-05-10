#include <iostream>
// #include <pybind11/pybind11.h>
#include <pybind11/embed.h>

namespace py = pybind11;
using namespace py::literals;
using namespace  std;

int main() {

    py::scoped_interpreter guard{};

    py::module_ calc = py::module_::import("calculate");
    py::object result = calc.attr("add")(1, 2);
    int n = result.cast<int>();

    cout << "Result is " << n << endl;
    return 0;
}