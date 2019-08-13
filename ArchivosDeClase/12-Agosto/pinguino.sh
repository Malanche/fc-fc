suma=$(echo "${@}" | sed 's/\s/+/g' | bc)
echo ${suma}
