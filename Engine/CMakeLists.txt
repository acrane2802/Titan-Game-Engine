add_library(Engine SHARED   "src/Core/Core.h" "src/Core/Application.cpp" "src/Core/Application.h" "src/Titan.h" "src/Core/Entrypoint.h" "src/Core/Logger.h" "src/Core/EventBus.h" "src/Core/Logger.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Engine PROPERTY CXX_STANDARD 20)
endif()

target_compile_definitions(Engine PRIVATE TITAN_BUILD_DLL=1)

include_directories(Engine PRIVATE "${CMAKE_SOURCE_DIR}/3rdparty/spdlog/include" "${CMAKE_SOURCE_DIR}/3rdparty/eventpp/include")
target_link_libraries(Engine PRIVATE spdlog::spdlog eventpp::eventpp)