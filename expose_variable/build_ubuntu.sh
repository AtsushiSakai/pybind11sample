c++ -O3 -shared -std=c++11 -fpic -I ../../pybind11/include/ `python-config --cflags --ldflags | sed s/-Wstrict-prototypes//` example.cpp -o example.so
