add_library(Engine SHARED "src/Engine.cpp" "src/Engine.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Engine PROPERTY CXX_STANDARD 20)
endif()