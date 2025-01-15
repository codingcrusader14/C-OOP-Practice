#!/bin/zsh

# Create necessary directories
mkdir -p fmt src

# Download and extract fmt library
curl -L https://github.com/fmtlib/fmt/archive/refs/tags/10.2.1.tar.gz -o fmt.tar.gz
tar xzf fmt.tar.gz

# Copy required files
cp -r fmt-10.2.1/include/fmt/* fmt/
cp -r fmt-10.2.1/src/* src/

# Create the format header file
cat > format << 'EOL'
#pragma once
#define FMT_HEADER_ONLY
#include "fmt/format.h"

namespace std {
    using fmt::format;
    using fmt::format_error;
    using fmt::formatter;
}
EOL

# Clean up downloaded files
rm -rf fmt.tar.gz fmt-10.2.1

echo "Setup complete! Don't forget to update your compilation flags to include the current directory in include path."
