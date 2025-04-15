#!/usr/bin/env bash
ret=$(echo "Ben" | ./hello-name-test)
if [ "$ret" = "What is you name? Hello, Ben" ]; then
    echo "✅ Test passes"
    exit 0
fi
echo "Unexpected output: $ret"
exit 1
