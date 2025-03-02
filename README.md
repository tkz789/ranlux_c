This is a c++ - compatible version of ranlux3.8 made by Martin Lüscher.

I made some changes to make original c code compilable both with gcc and g++, as well as introduced some performance optimisations, resulting in an overall performance gains of about 20% for avx2 version.

Note: this is still work in progress, while the code should work correctly, there are still some objects to be removed and maybe more changes to come.
