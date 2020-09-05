#!/bin/bash

echo "Make a fingerprint now..."
echo
sudo find -name '*.png' | xargs -d '\n' sha1sum > Rans_hash
