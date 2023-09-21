# c functions from the a dynamic library
import ctypes
lib = ctypes.CDLL("./mylib.so")
lib.hello()
l = ['hello', 'world']
lib.print_list.argtypes = [ctypes.py_object]
lib.print_list(l)
lib.printsum(45, 67)
lib.multiply(23)
