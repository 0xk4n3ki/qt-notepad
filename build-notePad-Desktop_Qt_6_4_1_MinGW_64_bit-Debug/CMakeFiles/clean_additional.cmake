# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\notePad_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\notePad_autogen.dir\\ParseCache.txt"
  "notePad_autogen"
  )
endif()
