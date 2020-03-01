# simple_python_cpp_module
A simple example on how to make a c++ module that can be used in python.
I wanted to make the easiest type of module so that I then could use it in blender.

Build on windows:
git clone --recursive https://github.com/stig-atle/simple_python_cpp_module
cd simple_python_cpp_module
mkdir build
cd build
cmake ../

Open the solution, build release version.
To test and load the module in python and call the function:
import module MyPythonModule
MyPythonModule.greet()
in python console.

With blender you need to put the module (.pyd file) where blender can find it, for example:
blender\bin\Release\2.82\python\DLLs\
Then you can import the module like above in your script.