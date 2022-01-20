#!/bin/bash

# For main decode
coredecode -in decode > outs/coredecode.e
espresso -Dso -oeqntott outs/coredecode.e | addassign -pre out.  > outs/equations
coredecode -in decode -legal > outs/legal.e
espresso -Dso -oeqntott outs/legal.e | addassign -pre out. > outs/legal_equation

#For CSRs
coredecode -in csrdecode > outs/csrdecode.e
espresso -Dso -oeqntott outs/csrdecode.e | addassign -pre out.  > outs/csr_equations
coredecode -in csrdecode -legal > outs/csrlegal.e
espresso -Dso -oeqntott outs/csrlegal.e | addassign -pre out. > outs/csr_legal_equation
