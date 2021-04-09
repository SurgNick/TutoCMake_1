
if (USE_MYMATH)
    add_subdirectory(mymath)
    #list(APPEND EXTRA_LIBS myMath) # what is this for ?
endif()


add_subdirectory(app)
