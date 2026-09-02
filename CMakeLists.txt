cmake_minimum_required(VERSION 3.15)

project(ThePankeyEngine_Utility_Base)

if(NOT TARGET ThePankeyEngine_Utility_Base)

    add_library(ThePankeyEngine_Utility_Base INTERFACE)

    target_include_directories(
        ThePankeyEngine_Utility_Base
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()

