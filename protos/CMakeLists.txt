# Directory where the protobuf_generate_cpp() will output the generated files
set(PROTO_SRC_DIR ${CMAKE_CURRENT_BINARY_DIR})

# Globbing .proto files
file(GLOB PROTO_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.proto")

# Generate C++ sources and headers from the .proto files
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

# Create a library from the generated sources
add_library(proto ${PROTO_SRCS} ${PROTO_HDRS})

# Since the generated files are in the binary dir, include that directory
target_include_directories(proto PUBLIC ${PROTO_SRC_DIR})
