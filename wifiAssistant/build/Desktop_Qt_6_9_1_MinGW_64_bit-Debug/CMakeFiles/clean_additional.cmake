# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\wifiAssistant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\wifiAssistant_autogen.dir\\ParseCache.txt"
  "wifiAssistant_autogen"
  )
endif()
