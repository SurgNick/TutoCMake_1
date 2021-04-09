
cmake_minimum_required(VERSION 3.11)

################### project ##########################
project(tutoPlusPropre)

################### options ##########################
option(USE_MYMATH "use myMath Lib" ON)

################### configure file ###################
set(MY_VAR 12)
configure_file(cmake/defines.h.in cmake/defines.h @ONLY)

################### app ##############################
add_subdirectory(src)


################### doc #############################

# do in build dir :
# cmake ../source/ -DCMAKE_INSTALL_PREFIX:PATH=/home/nicolas/document/TutoCMake/offidoc/install
