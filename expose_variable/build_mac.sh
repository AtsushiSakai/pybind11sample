c++ -O3 -shared -std=c++11 -I ../../pybind11/include/ `python-config --cflags --ldflags` example.cpp -o example.so
