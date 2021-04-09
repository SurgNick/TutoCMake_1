
set(appRelease appRelease)

add_executable(${appRelease} app/Main.cpp)

if (USE_MYMATH)
    target_link_libraries(${appRelease} PUBLIC myMath)
endif()

target_include_directories(${appRelease} PUBLIC
    "${PROJECT_BINARY_DIR}/cmake"
    # #include <defines.h>
)

message("PROJECT_BINARY_DIR       : ${PROJECT_BINARY_DIR}")
message("CMAKE_CURRENT_SOURCE_DIR : ${CMAKE_CURRENT_SOURCE_DIR}")



#mouai ...
# message("CMAKE_INSTALL_LIBDIR/cmake/PROJECT_NAME : ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")
message("${CMAKE_INSTALL_PREFIX}")

install(TARGETS appRelease DESTINATION "${CMAKE_INSTALL_PREFIX}/bin")
install(FILES "${PROJECT_BINARY_DIR}/cmake/defines.h"
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include"
)