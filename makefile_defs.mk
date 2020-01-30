EIGEN_HOME = /usr/local/include/eigen3/eigen3
GSL_INCLUDE = /usr/local/include/gsl
GSL_LIB = /usr/local/lib
SAMPLER_HOME = /home/steinhor/frib/.git/best_sampler/software
#location of software directory
SAMPLER_INSTALLDIR = /home/steinhor/frib/.git/best_sampler/local
#location of where you want things installed

CPP = /usr/bin/clang++
#CPP = /usr/bin/g++
#compiler

#CFLAGS = -O
#CFLAGS = -fast
#CFLAGS = -O2
CFLAGS = -O2 -std=c++14
#compiler optimization flags, usually -O2 for linux, -fast for OSX with g++
