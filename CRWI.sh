#!/bin/bash
if [[ -z $1 ]]; then
  echo "Missing argument."
  echo "Usage: $(basename "$0") FILENAME"
  exit 1
fi
SPOJ_PATH=$(dirname "$0")"/"
SAVE_PATH="/tmp/SPOJ/"
INPUT_FILE="${SPOJ_PATH}"input.txt
TARGET_FILE=$(basename "${1}")
mkdir -p ${SAVE_PATH}
[[ -f "${INPUT_FILE}" ]] || touch "${INPUT_FILE}"
g++ "${SPOJ_PATH}${TARGET_FILE}" -o "${SAVE_PATH}${TARGET_FILE}"
time "${SAVE_PATH}${TARGET_FILE}" < "${INPUT_FILE}"
