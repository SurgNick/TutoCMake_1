
set(SOURCES
    mymath/MyMath.cpp
)

set(HEADERS
    mymath/MyMath.hpp
)

add_library(myMath ${SOURCES} ${HEADERS})

target_include_directories(myMath PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
    # #include <mymath/MyMath.hpp>

    "${CMAKE_CURRENT_SOURCE_DIR}/mymath"
    # #include <MyMath.hpp>
)

message("CMAKE_CURRENT_SOURCE_DIR : ${CMAKE_CURRENT_SOURCE_DIR}")


install(TARGETS myMath DESTINATION "${CMAKE_INSTALL_PREFIX}/lib")
install(FILES ${HEADERS} DESTINATION "${CMAKE_INSTALL_PREFIX}/include")
