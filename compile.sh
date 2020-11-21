#!/bin/bash

arduino-cli compile "$PWD" \
  -b arduino:avr:nano \
  -v
