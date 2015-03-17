#!/bin/bash
while [ -n "$1" ]; do
   ARGS="$ARGS $1"
   shift
done

echo $ARGS

git add .
git commit -m "$ARGS"
git push origin master
