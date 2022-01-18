#!/bin/bash

# For main decode
coredecode -in decode > outs/coredecode.e
espresso -Dso -oeqntott outs/coredecode.e | addassign -pre out.  > outs/equations
coredecode -in decode -legal > outs/legal.e
espresso -Dso -oeqntott outs/legal.e | addassign -pre out. > outs/legal_equation
