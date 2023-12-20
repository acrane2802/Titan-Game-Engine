add_executable(Game "src/Game.cpp" "src/Game.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Game PROPERTY CXX_STANDARD 20)
endif()

include_directories(Game PRIVATE "${CMAKE_SOURCE_DIR}/Engine/src" "${CMAKE_SOURCE_DIR}/3rdparty/spdlog/include" "${CMAKE_SOURCE_DIR}/3rdparty/eventpp/include")
target_link_libraries(Game PRIVATE Engine spdlog::spdlog eventpp::eventpp)