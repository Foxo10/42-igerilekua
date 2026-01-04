#!/bin/sh
find . -name "*.sh" -exec basename {} \; | awk -F "." '{print $1}'
