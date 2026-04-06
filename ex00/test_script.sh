#!/bin/bash

# Configuration
EXECUTABLE="./convert"
TEMP_FILE="test_output.tmp"

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Function to run a test case
run_test() {
    local input="$1"
    local description="$2"

    echo -e "Testing: ${description} (input: \"${input}\")"
    $EXECUTABLE "$input" > "$TEMP_FILE" 2>&1
    cat "$TEMP_FILE"
    echo "-----------------------------------"
}

# Ensure the executable exists
if [ ! -f "$EXECUTABLE" ]; then
    echo "Executable $EXECUTABLE not found. Running make..."
    make
    if [ $? -ne 0 ]; then
        echo "Failed to compile. Exit."
        exit 1
    fi
fi

echo "=== STARTING SUBJECT REQUIREMENTS TESTS ==="

# 1. char cases
run_test "c" "Basic character"
run_test "a" "Another character"
run_test "*" "Non-digit character"
run_test "0" "Character digit (should be treated as int 0?)"

# 2. int cases
run_test "0" "Integer zero"
run_test "42" "Integer 42"
run_test "-42" "Negative integer"
run_test "2147483647" "INT_MAX"
run_test "-2147483648" "INT_MIN"

# 3. float cases
run_test "0.0f" "Float zero"
run_test "4.2f" "Float 4.2"
run_test "-4.2f" "Negative float"
run_test ".0f" "Float starting with dot (if supported)"
run_test "42.0f" "Float with .0"

# 4. double cases
run_test "0.0" "Double zero"
run_test "4.2" "Double 4.2"
run_test "-4.2" "Negative double"
run_test "123.456" "General double"

# 5. pseudo-literals (float)
run_test "-inff" "Negative infinity float"
run_test "+inff" "Positive infinity float"
run_test "nanf" "NaN float"

# 6. pseudo-literals (double)
run_test "-inf" "Negative infinity double"
run_test "+inf" "Positive infinity double"
run_test "nan" "NaN double"

# 7. edge cases and overflows
run_test "2147483648" "Int overflow (INT_MAX + 1)"
run_test "-2147483649" "Int underflow (INT_MIN - 1)"
run_test " " "Empty/space input"
run_test "42.42.42" "Multiple dots (invalid)"
run_test "42ff" "Multiple f (invalid)"
run_test "abc" "Invalid string"

rm -f "$TEMP_FILE"
echo "=== TESTS COMPLETE ==="
